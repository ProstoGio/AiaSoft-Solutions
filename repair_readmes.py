import os
import re
import json

# ==================== CONFIGURATION ====================
SOLUTIONS_DIR = "solutions"
PROGRESS_FILE = "classify_progress.json"
# =======================================================

def load_progress():
    if not os.path.exists(PROGRESS_FILE):
        print(f"❌ {PROGRESS_FILE} not found! Cannot repair without it.")
        return None
    with open(PROGRESS_FILE, encoding="utf-8") as f:
        return json.load(f)

def update_problem_readme(folder_path, topics, difficulty, complexity):
    readme_path = os.path.join(folder_path, "README.md")
    if not os.path.exists(readme_path):
        return False

    with open(readme_path, encoding="utf-8") as f:
        content = f.read()

    topics_str = ", ".join(topics) if topics else "<!-- Topic -->"

    new_content = re.sub(
        r'(<td><b>Topic</b></td>\s*<td>).*?(</td>)',
        lambda m: m.group(1) + topics_str + m.group(2),
        content, flags=re.DOTALL
    )
    new_content = re.sub(
        r'(<td><b>Difficulty</b></td>\s*<td>).*?(</td>)',
        lambda m: m.group(1) + difficulty + m.group(2),
        new_content, flags=re.DOTALL
    )
    new_content = re.sub(
        r'(<td><b>Complexity</b></td>\s*<td>).*?(</td>)',
        lambda m: m.group(1) + complexity + m.group(2),
        new_content, flags=re.DOTALL
    )

    with open(readme_path, "w", encoding="utf-8") as f:
        f.write(new_content)

    return True

def main():
    progress = load_progress()
    if progress is None:
        return

    print(f"📋 Found {len(progress)} classified problems in {PROGRESS_FILE}.\n")

    fixed = 0
    missing = 0

    for problem_id_str, info in progress.items():
        problem_id = int(problem_id_str)
        padded = str(problem_id).zfill(3)
        folder_path = os.path.join(SOLUTIONS_DIR, f"{padded}.")

        if not os.path.exists(folder_path):
            print(f"  ⚠️  Folder not found for #{padded} — skipping.")
            missing += 1
            continue

        topics     = info.get("topics", [])
        difficulty = info.get("difficulty", "Medium")
        complexity = info.get("complexity", "O(?)")

        success = update_problem_readme(folder_path, topics, difficulty, complexity)
        if success:
            print(f"  ✅ {padded}. — {', '.join(topics) or '?'} | {difficulty} | {complexity}")
            fixed += 1
        else:
            print(f"  ⚠️  README.md missing in {padded}. — skipping.")
            missing += 1

    print(f"\n🎉 Repaired {fixed} READMEs. {missing} skipped (missing files).")
    print("👉 Now run update_readme.py to refresh the root README table.")

if __name__ == "__main__":
    main()
