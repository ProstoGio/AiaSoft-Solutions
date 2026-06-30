import os
import re
import json

# ==================== CONFIGURATION ====================
REPO_ROOT     = "."
SOLUTIONS_DIR = "solutions"
README_PATH   = "README.md"
PROGRESS_FILE = "classify_progress.json"
# =======================================================

def is_solved(folder_path):
    sol_path = os.path.join(folder_path, "sol.cpp")
    if not os.path.exists(sol_path):
        return False
    with open(sol_path, encoding="utf-8") as f:
        return "your solution here" not in f.read()

def get_title(folder_path):
    readme_path = os.path.join(folder_path, "README.md")
    if not os.path.exists(readme_path):
        return None
    with open(readme_path, encoding="utf-8") as f:
        first_line = f.readline().strip()
    match = re.match(r'^#\s*\d+\.\s*(.+)$', first_line)
    if match:
        title = match.group(1).strip()
        if "problem name" not in title.lower() and title:
            return title
    return None

def load_progress():
    if os.path.exists(PROGRESS_FILE):
        with open(PROGRESS_FILE, encoding="utf-8") as f:
            return json.load(f)
    return {}

def build_table(solved, progress):
    lines = [
        "| # | Problem | Topics | Difficulty |",
        "|---|---------|--------|------------|",
    ]
    for p in solved:
        pid     = str(p["num"])
        folder  = p["folder"].replace(" ", "%20")
        link    = f"[{p['padded']}](solutions/{folder})"
        title   = p["title"] or "<!-- name -->"
        info    = progress.get(pid, {})
        topics  = ", ".join(info.get("topics", [])) or ""
        diff    = info.get("difficulty", "")
        lines.append(f"| {link} | {title} | {topics} | {diff} |")
    return "\n".join(lines)

def build_topic_table(solved, progress):
    by_padded = {p["padded"]: p["num"] for p in solved}

    topic_map = {}
    for p in solved:
        pid = str(p["num"])
        info = progress.get(pid, {})
        for topic in info.get("topics", []):
            topic_map.setdefault(topic, []).append(p["padded"])

    lines = [
        "| Topic | Problems |",
        "|-------|----------|",
    ]
    for topic in sorted(topic_map.keys()):
        padded_list = sorted(topic_map[topic], key=lambda x: by_padded[x])
        problems_str = ", ".join(padded_list)
        lines.append(f"| {topic} | {problems_str} |")

    return "\n".join(lines)

def update_readme(table_str, count):
    with open(README_PATH, encoding="utf-8") as f:
        content = f.read()

    content = re.sub(
        r'problems%20solved-\d+-',
        f'problems%20solved-{count}-',
        content
    )

    pattern = r'(##\s*[^\n]*Problem Index\s*\n+)(.+?)(\n+---)'

    def do_replace(m):
        return m.group(1) + table_str + m.group(3)

    match = re.search(pattern, content, flags=re.DOTALL)
    if not match:
        print("⚠️  Could not find '## 🗂️ Problem Index' in README.md")
        return

    new_content = re.sub(pattern, do_replace, content, flags=re.DOTALL)

    with open(README_PATH, "w", encoding="utf-8") as f:
        f.write(new_content)

def update_topic_table(topic_table_str):
    with open(README_PATH, encoding="utf-8") as f:
        content = f.read()

    # match the topic table heading through to the next --- or end-of-section divider
    pattern = r'(##\s*[^\n]*Browse by Topic\s*\n+)(.+?)(\n+---|\n+<div)'

    def do_replace(m):
        return m.group(1) + topic_table_str + m.group(3)

    match = re.search(pattern, content, flags=re.DOTALL)
    if not match:
        print("⚠️  Could not find '## 🔍 Browse by Topic' in README.md")
        return

    new_content = re.sub(pattern, do_replace, content, flags=re.DOTALL)

    with open(README_PATH, "w", encoding="utf-8") as f:
        f.write(new_content)

def main():
    solutions_path = os.path.join(REPO_ROOT, SOLUTIONS_DIR)
    if not os.path.exists(solutions_path):
        print(f"❌ solutions/ folder not found.")
        return

    progress = load_progress()

    solved = []
    for folder_name in sorted(os.listdir(solutions_path)):
        folder_path = os.path.join(solutions_path, folder_name)
        if not os.path.isdir(folder_path):
            continue
        if not re.match(r'^\d+\.$', folder_name):
            continue
        if not is_solved(folder_path):
            continue

        num = int(folder_name.rstrip("."))
        solved.append({
            "num":    num,
            "padded": str(num).zfill(3),
            "title":  get_title(folder_path),
            "folder": folder_name,
        })

    solved.sort(key=lambda x: x["num"])
    print(f"📊 {len(solved)} solved problems found.")

    table = build_table(solved, progress)
    update_readme(table, len(solved))
    print(f"✅ README.md problem index updated.")

    topic_table = build_topic_table(solved, progress)
    update_topic_table(topic_table)
    print(f"✅ README.md topic table updated.")

if __name__ == "__main__":
    main()
