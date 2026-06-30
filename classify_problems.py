import os
import re
import time
import json
import google.generativeai as genai

# ==================== CONFIGURATION ====================
SOLUTIONS_DIR = "solutions"
SLEEP_SEC     = 5  # 15 RPM limit = 1 request per 4s, 5s to be safe
# =======================================================

print("Paste your Gemini API key and press Enter:")
GEMINI_API_KEY = input().strip()
genai.configure(api_key=GEMINI_API_KEY)
model = genai.GenerativeModel("gemini-3.1-flash-lite")

VALID_TOPICS = [
    "Math", "Implementation", "Strings", "Bit Manipulation", "Greedy",
    "Sorting", "Binary Search", "Recursion", "Dynamic Programming",
    "Graphs", "Trees", "Prefix Sums", "Number Theory", "Geometry",
    "Game Theory", "Sets", "Sequences", "Grid"
]

VALID_DIFFICULTIES = ["Easy", "Medium", "Hard", "Very Hard"]

# -------------------------------------------------------
# Ask Gemini to classify a problem
# -------------------------------------------------------
def classify(problem_id, title, statement, code):
    prompt = f"""You are an experienced competitive programming judge classifying a problem from a Georgian competitive programming platform called AiaSoft.ge. Your classifications will be shown publicly, so they must be honest and well-calibrated — not biased toward "Easy".

Problem #{problem_id}: {title}

Problem statement:
{statement[:1500]}

C++ solution:
{code[:1500]}

Use these criteria strictly:

EASY — single obvious idea, direct simulation, basic math/string operations, no algorithmic technique beyond a loop or simple formula. A beginner solves this in their first weeks of programming.

MEDIUM — requires combining 2+ ideas, choosing the right data structure, careful edge-case handling, or a named technique applied directly (binary search, basic DP, basic graph traversal, prefix sums, two pointers). Takes real thought but the path to the solution is findable with some practice.

HARD — requires a non-obvious insight, a less common technique, combining multiple algorithms, or careful complexity optimization (e.g. advanced DP states, graph algorithms beyond plain BFS/DFS, segment trees, advanced greedy proofs, bitmask DP).

VERY HARD — requires deep mathematical insight, advanced data structures, multiple combined non-trivial techniques, or solutions that are very easy to get wrong (e.g. heavy-light decomposition, advanced number theory, complex DP optimizations, suffix structures).

Look at the actual algorithmic content of the C++ solution (loop nesting, data structures used, algorithmic techniques like DP/graphs/segment trees) — not just its line count. A short solution can still be Hard if it relies on a clever non-obvious trick.

Respond with ONLY a JSON object like this, nothing else:
{{
  "topics": ["Topic1", "Topic2"],
  "difficulty": "Medium",
  "complexity": "O(n)"
}}

Rules:
- topics: pick 1-3 from this list only: {", ".join(VALID_TOPICS)}
- difficulty: exactly one of: Easy, Medium, Hard, Very Hard — judge honestly using the criteria above, do not default to Easy
- complexity: the time complexity of the solution e.g. O(1), O(n), O(n log n), O(n²)
"""
    max_retries = 4
    wait = 15

    for attempt in range(max_retries):
        try:
            response = model.generate_content(prompt)
            raw = response.text.strip()
            raw = re.sub(r'^```json\s*', '', raw)
            raw = re.sub(r'^```\s*', '', raw)
            raw = re.sub(r'\s*```$', '', raw)
            data = json.loads(raw)

            topics = [t for t in data.get("topics", []) if t in VALID_TOPICS]
            difficulty = data.get("difficulty", "Medium")
            if difficulty not in VALID_DIFFICULTIES:
                difficulty = "Medium"
            complexity = data.get("complexity", "O(?)")

            return topics, difficulty, complexity

        except Exception as e:
            err = str(e)
            if "429" in err or "quota" in err.lower() or "resource" in err.lower():
                if attempt < max_retries - 1:
                    wait_time = wait * (attempt + 1)
                    print(f"  ⏳ Rate limited — waiting {wait_time}s before retry ({attempt + 1}/{max_retries - 1})...")
                    time.sleep(wait_time)
                    continue
            print(f"  ⚠️  Gemini error: {e}")
            return [], "Medium", "O(?)"

    print(f"  ❌ Failed after {max_retries} attempts — skipping.")
    return [], "Medium", "O(?)"

# -------------------------------------------------------
# Update the problem's README.md with topic/difficulty/complexity
# -------------------------------------------------------
def update_problem_readme(folder_path, topics, difficulty, complexity):
    readme_path = os.path.join(folder_path, "README.md")
    if not os.path.exists(readme_path):
        return

    with open(readme_path, encoding="utf-8") as f:
        content = f.read()

    topics_str = ", ".join(topics) if topics else "<!-- Topic -->"

    content = re.sub(
        r'(<td><b>Topic</b></td>\s*<td>).*?(</td>)',
        rf'\g<1>{topics_str}\2',
        content, flags=re.DOTALL
    )
    content = re.sub(
        r'(<td><b>Difficulty</b></td>\s*<td>).*?(</td>)',
        rf'\g<1>{difficulty}\2',
        content, flags=re.DOTALL
    )
    content = re.sub(
        r'(<td><b>Complexity</b></td>\s*<td>).*?(</td>)',
        rf'\g<1>{complexity}\2',
        content, flags=re.DOTALL
    )

    with open(readme_path, "w", encoding="utf-8") as f:
        f.write(content)

# -------------------------------------------------------
# Save progress to a JSON file so we can resume if interrupted
# -------------------------------------------------------
PROGRESS_FILE = "classify_progress.json"

def load_progress():
    if os.path.exists(PROGRESS_FILE):
        with open(PROGRESS_FILE, encoding="utf-8") as f:
            return json.load(f)
    return {}

def save_progress(progress):
    with open(PROGRESS_FILE, "w", encoding="utf-8") as f:
        json.dump(progress, f, ensure_ascii=False, indent=2)

# -------------------------------------------------------
# Main
# -------------------------------------------------------
def main():
    if not os.path.exists(SOLUTIONS_DIR):
        print("❌ solutions/ folder not found.")
        return

    progress = load_progress()

    folders = sorted([
        f for f in os.listdir(SOLUTIONS_DIR)
        if os.path.isdir(os.path.join(SOLUTIONS_DIR, f))
        and re.match(r'^\d+\.$', f)
    ])

    solved = []
    for folder_name in folders:
        folder_path = os.path.join(SOLUTIONS_DIR, folder_name)
        sol_path = os.path.join(folder_path, "sol.cpp")
        if os.path.exists(sol_path):
            with open(sol_path, encoding="utf-8") as f:
                if "your solution here" not in f.read():
                    solved.append((folder_name, folder_path))

    print(f"📋 Found {len(solved)} solved problems.\n")

    for folder_name, folder_path in solved:
        problem_id = int(folder_name.rstrip("."))
        padded = str(problem_id).zfill(3)

        # skip if already classified
        if str(problem_id) in progress:
            print(f"  ⏭️  {padded}. already classified — skipping.")
            continue

        # read statement
        statement = ""
        statement_path = os.path.join(folder_path, "statement.md")
        if os.path.exists(statement_path):
            with open(statement_path, encoding="utf-8") as f:
                statement = f.read()

        # read code
        code = ""
        sol_path = os.path.join(folder_path, "sol.cpp")
        if os.path.exists(sol_path):
            with open(sol_path, encoding="utf-8") as f:
                code = f.read()

        # get title from readme
        title = padded
        readme_path = os.path.join(folder_path, "README.md")
        if os.path.exists(readme_path):
            with open(readme_path, encoding="utf-8") as f:
                first_line = f.readline().strip()
            match = re.match(r'^#\s*\d+\.\s*(.+)$', first_line)
            if match:
                title = match.group(1).strip()

        print(f"🤖 Classifying #{padded} — {title}...")

        topics, difficulty, complexity = classify(problem_id, title, statement, code)

        print(f"  📂 {', '.join(topics) or '?'}  |  ⭐ {difficulty}  |  ⏱️  {complexity}")

        # only save progress if we got real results
        if not topics and complexity == "O(?)":
            print(f"  ⚠️  Got empty result — not saving, will retry next run.")
            continue

        update_problem_readme(folder_path, topics, difficulty, complexity)

        # save progress
        progress[str(problem_id)] = {
            "topics": topics,
            "difficulty": difficulty,
            "complexity": complexity,
            "title": title
        }
        save_progress(progress)

        time.sleep(SLEEP_SEC)

    print(f"\n✅ Classification done! Now run update_readme.py to update the root README.")

if __name__ == "__main__":
    main()
