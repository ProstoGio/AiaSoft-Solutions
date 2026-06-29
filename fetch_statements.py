import os
import re
import requests
import time

# ==================== CONFIGURATION ====================
SOLUTIONS_DIR = "solutions"
SLEEP_SEC     = 1
# =======================================================

print("Paste your Bearer token and press Enter:")
BEARER_TOKEN = input().strip()

headers = {
    'Authorization': f'Bearer {BEARER_TOKEN}',
    'User-Agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36'
}

# -------------------------------------------------------
# Clean LaTeX/math notation into readable plain text
# -------------------------------------------------------
def clean_math(text):
    if not text:
        return text

    # superscripts map
    superscripts = str.maketrans('0123456789+-', '⁰¹²³⁴⁵⁶⁷⁸⁹⁺⁻')

    def replace_math(m):
        inner = m.group(1).strip()

        # X^Y → X^Y with superscript digits e.g. 10^9 → 10⁹
        inner = re.sub(
            r'(\w+)\^(\{([^}]+)\}|(\w+))',
            lambda x: x.group(1) + (x.group(3) or x.group(4)).translate(superscripts),
            inner
        )

        # common symbols
        inner = inner.replace(r'\leq', '≤').replace(r'\geq', '≥')
        inner = inner.replace(r'\le',  '≤').replace(r'\ge',  '≥')
        inner = inner.replace(r'\neq', '≠').replace(r'\ne',  '≠')
        inner = inner.replace(r'\cdot', '·').replace(r'\times', '×')
        inner = inner.replace(r'\infty', '∞')
        inner = inner.replace(r'\sum', 'Σ').replace(r'\sqrt', '√')
        inner = inner.replace(r'\left', '').replace(r'\right', '')
        inner = inner.replace(r'\lfloor', '⌊').replace(r'\rfloor', '⌋')
        inner = inner.replace(r'\lceil', '⌈').replace(r'\rceil', '⌉')
        inner = inner.replace('{', '').replace('}', '')
        inner = inner.replace('_', '')   # remove subscript markers

        return inner

    # replace $...$ blocks
    text = re.sub(r'\$([^$]+)\$', replace_math, text)

    # clean up any leftover stray $ signs
    text = text.replace('$', '')

    return text

# -------------------------------------------------------
# Fetch problem data from API
# -------------------------------------------------------
def fetch_problem(problem_id):
    url = f"https://api.aiasoft.ge/problem/{problem_id}"
    r = requests.get(url, headers=headers)
    if r.status_code == 200:
        return r.json()
    print(f"  ⚠️  Could not fetch problem {problem_id}. Status: {r.status_code}")
    return None

# -------------------------------------------------------
# Build statement.md content from API data
# -------------------------------------------------------
def build_statement(data, problem_id):
    padded    = str(problem_id).zfill(3)
    title     = data.get('title', '?')
    statement   = clean_math(data.get('statement', '').strip())
    input_desc  = clean_math(data.get('input_description', '').strip())
    output_desc = clean_math(data.get('output_description', '').strip())
    time_limit   = data.get('time_limit', '?')
    memory_limit = data.get('memory_limit', '?')

    examples = data.get('examples') or data.get('tests') or []

    lines = [
        f"# Problem Statement — {padded}. {title}",
        "",
        f"> Copied from [AiaSoft.ge #{problem_id}](https://aiasoft.ge/problem/{problem_id})",
        "",
        f"**Time limit:** {time_limit}s &nbsp;|&nbsp; **Memory limit:** {memory_limit} MB",
        "",
        "## Task",
        "",
        statement or "<!-- paste statement here -->",
        "",
        "## Input",
        "",
        input_desc or "<!-- input format -->",
        "",
        "## Output",
        "",
        output_desc or "<!-- output format -->",
    ]

    if examples:
        lines.append("")
        lines.append("## Examples")
        for i, ex in enumerate(examples, 1):
            inp = ex.get('input', '').strip()
            out = ex.get('output', '').strip()
            lines.append("")
            lines.append(f"### Example {i}")
            lines.append("")
            lines.append("**Input:**")
            lines.append("```")
            lines.append(inp)
            lines.append("```")
            lines.append("")
            lines.append("**Output:**")
            lines.append("```")
            lines.append(out)
            lines.append("```")

    return "\n".join(lines)

# -------------------------------------------------------
# Update problem README.md with real title
# -------------------------------------------------------
def update_problem_readme(folder_path, problem_id, title):
    padded = str(problem_id).zfill(3)
    readme_path = os.path.join(folder_path, "README.md")
    if not os.path.exists(readme_path):
        return

    with open(readme_path, encoding="utf-8") as f:
        content = f.read()

    new_title_line = f"# {padded}. {title}"
    content = re.sub(r'^# \d+\..*$', new_title_line, content, count=1, flags=re.MULTILINE)
    content = re.sub(
        r'https://aiasoft\.ge/problem/\d+',
        f'https://aiasoft.ge/problem/{problem_id}',
        content
    )

    with open(readme_path, "w", encoding="utf-8") as f:
        f.write(content)

# -------------------------------------------------------
# Should we (re)fetch this statement?
# -------------------------------------------------------
def needs_fetch(statement_path):
    if not os.path.exists(statement_path):
        return True
    with open(statement_path, encoding="utf-8") as f:
        content = f.read()
    # refetch if placeholder or still has $ signs (old bugged version)
    if "paste problem statement here" in content:
        return True
    if "paste statement here" in content:
        return True
    if "$" in content:
        return True
    return False

# -------------------------------------------------------
# Main
# -------------------------------------------------------
def main():
    if not os.path.exists(SOLUTIONS_DIR):
        print(f"❌ solutions/ folder not found.")
        return

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

    print(f"📋 Found {len(solved)} solved problems. Fetching statements...\n")

    for folder_name, folder_path in solved:
        problem_id = int(folder_name.rstrip("."))
        padded = str(problem_id).zfill(3)
        statement_path = os.path.join(folder_path, "statement.md")

        if not needs_fetch(statement_path):
            print(f"  ⏭️  {padded}. already clean — skipping.")
            continue

        print(f"⬇️  Fetching #{padded}...")

        data = fetch_problem(problem_id)
        time.sleep(SLEEP_SEC)

        if not data:
            continue

        title = data.get('title', '?')

        statement_content = build_statement(data, problem_id)
        with open(statement_path, "w", encoding="utf-8") as f:
            f.write(statement_content)

        update_problem_readme(folder_path, problem_id, title)

        print(f"  ✅ {padded}. {title}")

    print("\n🎉 Done! Run update_readme.py to refresh the root README.")

if __name__ == "__main__":
    main()
