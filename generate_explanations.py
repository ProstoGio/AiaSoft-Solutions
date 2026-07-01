import os
import re
import time
import json
import google.generativeai as genai

# ==================== CONFIGURATION ====================
SOLUTIONS_DIR = "solutions"
PROGRESS_FILE = "explain_progress.json"
SLEEP_SEC     = 8   # 15 RPM limit = 1 request per 4s, 8s for safety buffer
# =======================================================

print("Paste your Gemini API key and press Enter:")
GEMINI_API_KEY = input().strip()
genai.configure(api_key=GEMINI_API_KEY)
model = genai.GenerativeModel("gemini-3.1-flash-lite")

# -------------------------------------------------------
# The prompt — encodes the humanization + style guide rules
# -------------------------------------------------------
def build_prompt(problem_id, title, statement, code, topics, difficulty):
    topics_str = ", ".join(topics) if topics else "general"

    return f"""You are a Georgian competitive programmer writing explanations for your own solved problem, to be published on GitHub. You are NOT an AI assistant explaining something generically — you are the person who actually solved this and is walking a friend through how you thought about it.

Problem #{problem_id}: {title}
Difficulty: {difficulty}
Topics: {topics_str}

Problem statement (Georgian):
{statement[:1800]}

C++ solution:
{code[:1800]}

Write TWO explanations of this solution — one in English, one in Georgian. Both must cover the same ideas but be written naturally in each language, not translated word-for-word from one to the other.

CRITICAL HUMANIZATION RULES (apply to both languages):
- Vary sentence length and rhythm. Don't make every sentence the same length or structure.
- NEVER use these phrases: "It's important to note that", "In conclusion", "This problem requires us to", "Let's dive into", "Overall, this approach", "Furthermore", "Additionally", "Moreover" (as paragraph starters).
- Be specific, not generic. Don't say "we loop through the array" — say what you're actually tracking or computing as you do.
- Let some personality and opinion show. It's fine to call something "the obvious first instinct" or "a neat trick once you see it."
- Don't over-explain basics a C++ programmer already knows. Focus on the non-obvious part of THIS problem.
- For the Georgian version: write the way a Georgian CS student would actually explain it to a groupmate out loud — not a stiff textbook translation. Keep technical terms like "XOR", "DP", "O(n log n)" as-is rather than force-translating them, since that's how Georgian programmers actually talk.
- Imperfection is fine — sections don't need to be the same length, bullet lists don't need to match in count between languages.

Respond with ONLY a JSON object in this exact structure, nothing else, no markdown fences:

{{
  "en": {{
    "approach": "3-8 sentences explaining the strategy in plain language, in English",
    "time_complexity": "O(?)",
    "space_complexity": "O(?)",
    "key_insights": ["insight 1", "insight 2"],
    "common_mistakes": ["mistake 1"],
    "walkthrough": "optional: trace through a sample input step by step, or empty string if not needed for this difficulty"
  }},
  "ge": {{
    "approach": "იგივეს შინაარსის ახსნა ქართულად, ბუნებრივი წინადადებებით",
    "time_complexity": "O(?)",
    "space_complexity": "O(?)",
    "key_insights": ["დაკვირვება 1", "დაკვირვება 2"],
    "common_mistakes": ["შეცდომა 1"],
    "walkthrough": "არასავალდებულო: ნაბიჯ-ნაბიჯ მაგალითი, ან ცარიელი სტრიქონი თუ საჭირო არაა ამ სირთულისთვის"
  }}
}}

Rules:
- key_insights: 1-3 items, each 1-2 sentences
- common_mistakes: 0-3 items (empty array if none apply)
- walkthrough: only include for Medium/Hard/Very Hard problems, empty string for Easy unless genuinely useful
- time_complexity / space_complexity: short notation like O(1), O(n), O(n log n), O(n²)
"""

# -------------------------------------------------------
# Call Gemini with retry logic
# -------------------------------------------------------
def generate(problem_id, title, statement, code, topics, difficulty):
    prompt = build_prompt(problem_id, title, statement, code, topics, difficulty)

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

            if "en" not in data or "ge" not in data:
                raise ValueError("Missing 'en' or 'ge' key in response")

            return data

        except Exception as e:
            err = str(e)
            if "429" in err or "quota" in err.lower() or "resource" in err.lower():
                if attempt < max_retries - 1:
                    wait_time = wait * (attempt + 1)
                    print(f"  ⏳ Rate limited — waiting {wait_time}s before retry ({attempt + 1}/{max_retries - 1})...")
                    time.sleep(wait_time)
                    continue
            print(f"  ⚠️  Gemini error: {e}")
            return None

    print(f"  ❌ Failed after {max_retries} attempts — skipping.")
    return None

# -------------------------------------------------------
# Build markdown from generated data
# -------------------------------------------------------
def build_en_markdown(problem_id, title, data):
    en = data["en"]
    lines = [
        f"# Explanation — {problem_id}. {title}",
        "",
        "## Approach",
        "",
        en.get("approach", "").strip(),
        "",
        "## Complexity",
        "",
        "| | |",
        "|-|--|",
        f"| Time | {en.get('time_complexity', 'O(?)')} |",
        f"| Space | {en.get('space_complexity', 'O(?)')} |",
        "",
        "## Key Insights",
        "",
    ]
    for insight in en.get("key_insights", []):
        lines.append(f"- {insight}")

    mistakes = en.get("common_mistakes", [])
    if mistakes:
        lines.append("")
        lines.append("## Common Mistakes")
        lines.append("")
        for mistake in mistakes:
            lines.append(f"- {mistake}")

    walkthrough = en.get("walkthrough", "").strip()
    if walkthrough:
        lines.append("")
        lines.append("## Walkthrough")
        lines.append("")
        lines.append(walkthrough)

    return "\n".join(lines) + "\n"

def build_ge_markdown(problem_id, title, data):
    ge = data["ge"]
    lines = [
        f"# განმარტება — {problem_id}. {title}",
        "",
        "## მიდგომა",
        "",
        ge.get("approach", "").strip(),
        "",
        "## სირთულე",
        "",
        "| | |",
        "|-|--|",
        f"| დრო | {ge.get('time_complexity', 'O(?)')} |",
        f"| მეხსიერება | {ge.get('space_complexity', 'O(?)')} |",
        "",
        "## მთავარი დაკვირვებები",
        "",
    ]
    for insight in ge.get("key_insights", []):
        lines.append(f"- {insight}")

    mistakes = ge.get("common_mistakes", [])
    if mistakes:
        lines.append("")
        lines.append("## ხშირი შეცდომები")
        lines.append("")
        for mistake in mistakes:
            lines.append(f"- {mistake}")

    walkthrough = ge.get("walkthrough", "").strip()
    if walkthrough:
        lines.append("")
        lines.append("## ნაბიჯ-ნაბიჯ ახსნა")
        lines.append("")
        lines.append(walkthrough)

    return "\n".join(lines) + "\n"

# -------------------------------------------------------
# Progress tracking
# -------------------------------------------------------
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

    # load classification data (topics, difficulty) if available
    classify_data = {}
    if os.path.exists("classify_progress.json"):
        with open("classify_progress.json", encoding="utf-8") as f:
            classify_data = json.load(f)

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

        en_path = os.path.join(folder_path, "explanation-en.md")
        ge_path = os.path.join(folder_path, "explanation-ge.md")

        # skip if already generated
        if str(problem_id) in progress:
            print(f"  ⏭️  {padded}. already explained — skipping.")
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

        # get title + topics + difficulty from classify data, fallback to README
        info = classify_data.get(str(problem_id), {})
        title = info.get("title")
        if not title:
            readme_path = os.path.join(folder_path, "README.md")
            if os.path.exists(readme_path):
                with open(readme_path, encoding="utf-8") as f:
                    first_line = f.readline().strip()
                match = re.match(r'^#\s*\d+\.\s*(.+)$', first_line)
                if match:
                    title = match.group(1).strip()
        title = title or padded

        topics     = info.get("topics", [])
        difficulty = info.get("difficulty", "Medium")

        print(f"🤖 Generating explanations for #{padded} — {title}...")

        data = generate(problem_id, title, statement, code, topics, difficulty)

        if not data:
            print(f"  ⚠️  No data returned — will retry next run.")
            time.sleep(SLEEP_SEC)
            continue

        try:
            en_md = build_en_markdown(padded, title, data)
            ge_md = build_ge_markdown(padded, title, data)
        except Exception as e:
            print(f"  ⚠️  Failed to build markdown: {e} — will retry next run.")
            time.sleep(SLEEP_SEC)
            continue

        with open(en_path, "w", encoding="utf-8") as f:
            f.write(en_md)
        with open(ge_path, "w", encoding="utf-8") as f:
            f.write(ge_md)

        progress[str(problem_id)] = True
        save_progress(progress)

        print(f"  ✅ {padded}. — explanations written.")

        time.sleep(SLEEP_SEC)

    print("\n🎉 Done! Explanations generated for all solved problems.")

if __name__ == "__main__":
    main()
