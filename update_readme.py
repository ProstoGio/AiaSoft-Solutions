import os
import re

# ==================== CONFIGURATION ====================
REPO_ROOT    = "."           # root of your repo
SOLUTIONS_DIR = "solutions"
README_PATH  = "README.md"
# =======================================================

def is_solved(folder_path):
    sol_path = os.path.join(folder_path, "sol.cpp")
    if not os.path.exists(sol_path):
        return False
    with open(sol_path, encoding="utf-8") as f:
        content = f.read()
    return "your solution here" not in content

def get_problem_info(folder_path, folder_name):
    # extract problem number from folder name e.g. "042."
    num_str = folder_name.rstrip(".")
    try:
        num = int(num_str)
    except ValueError:
        return None

    padded = num_str.zfill(3)

    # try to read title from the problem's README.md
    readme_path = os.path.join(folder_path, "README.md")
    title = None
    if os.path.exists(readme_path):
        with open(readme_path, encoding="utf-8") as f:
            first_line = f.readline().strip()
        # first line is like: # 042. პრობლემის სახელი
        match = re.match(r'^#\s*\d+\.\s*(.+)$', first_line)
        if match:
            title = match.group(1).strip()
            # ignore placeholder
            if "problem name" in title.lower() or title == "":
                title = None

    return {
        "num": num,
        "padded": padded,
        "title": title or "<!-- name -->",
        "folder": folder_name,
    }

def build_table(solved):
    lines = [
        "| # | Problem | Topics | Difficulty |",
        "|---|---------|--------|------------|",
    ]
    for p in solved:
        folder_encoded = p["folder"].replace(" ", "%20")
        link = f"[{p['padded']}](solutions/{folder_encoded})"
        title = p["title"]
        lines.append(f"| {link} | {title} | | |")
    return "\n".join(lines)

def update_readme(table_str, count):
    with open(README_PATH, encoding="utf-8") as f:
        content = f.read()

    # update the badge count
    content = re.sub(
        r'problems%20solved-\d+-',
        f'problems%20solved-{count}-',
        content
    )

    # replace the table between ## 🗂️ Problem Index and the next ---
    pattern = r'(## 🗂️ Problem Index\n\n)(.+?)(\n\n---)'
    replacement = rf'\g<1>{table_str}\g<3>'
    new_content = re.sub(pattern, replacement, content, flags=re.DOTALL)

    if new_content == content:
        print("⚠️  Could not find the problem index section in README.md")
        print("   Make sure it has '## 🗂️ Problem Index' as a heading.")
        return

    with open(README_PATH, "w", encoding="utf-8") as f:
        f.write(new_content)

def main():
    solutions_path = os.path.join(REPO_ROOT, SOLUTIONS_DIR)

    if not os.path.exists(solutions_path):
        print(f"❌ solutions/ folder not found at {solutions_path}")
        return

    solved = []
    total = 0

    for folder_name in sorted(os.listdir(solutions_path)):
        folder_path = os.path.join(solutions_path, folder_name)
        if not os.path.isdir(folder_path):
            continue
        if not re.match(r'^\d+\.$', folder_name):
            continue

        total += 1
        if is_solved(folder_path):
            info = get_problem_info(folder_path, folder_name)
            if info:
                solved.append(info)

    solved.sort(key=lambda x: x["num"])

    print(f"📊 {len(solved)} solved out of {total} total folders.")

    table = build_table(solved)
    update_readme(table, len(solved))

    print(f"✅ README.md updated with {len(solved)} problems.")

if __name__ == "__main__":
    main()
