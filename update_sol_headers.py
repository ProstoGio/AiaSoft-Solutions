import os
import re
import json

# ==================== CONFIGURATION ====================
SOLUTIONS_DIR = "solutions"
PROGRESS_FILE = "classify_progress.json"
# =======================================================

def load_progress():
    if not os.path.exists(PROGRESS_FILE):
        print(f"❌ {PROGRESS_FILE} not found! Cannot proceed without it.")
        return None
    with open(PROGRESS_FILE, encoding="utf-8") as f:
        return json.load(f)

def update_sol_header(sol_path, padded, title, topics, complexity):
    with open(sol_path, encoding="utf-8") as f:
        content = f.read()

    topics_str = ", ".join(topics) if topics else "Uncategorized"

    new_content = re.sub(
        r'// AiaSoft #\d+.*',
        f'// AiaSoft #{padded} — {title}',
        content, count=1
    )
    new_content = re.sub(
        r'// Complexity:.*',
        f'// Complexity: {complexity}',
        new_content, count=1
    )
    new_content = re.sub(
        r'// Topics:.*',
        f'// Topics: {topics_str}',
        new_content, count=1
    )

    if new_content != content:
        with open(sol_path, "w", encoding="utf-8") as f:
            f.write(new_content)
        return True
    return False

def main():
    progress = load_progress()
    if progress is None:
        return

    print(f"📋 Found {len(progress)} classified problems.\n")

    fixed = 0
    skipped = 0

    for problem_id_str, info in progress.items():
        problem_id = int(problem_id_str)
        padded = str(problem_id).zfill(3)
        folder_path = os.path.join(SOLUTIONS_DIR, f"{padded}.")
        sol_path = os.path.join(folder_path, "sol.cpp")

        if not os.path.exists(sol_path):
            print(f"  ⚠️  sol.cpp not found for #{padded} — skipping.")
            skipped += 1
            continue

        topics     = info.get("topics", [])
        complexity = info.get("complexity", "O(?)")
        title      = info.get("title", padded)

        changed = update_sol_header(sol_path, padded, title, topics, complexity)
        if changed:
            print(f"  ✅ {padded}. — {', '.join(topics) or '?'} | {complexity}")
            fixed += 1
        else:
            skipped += 1

    print(f"\n🎉 Updated {fixed} sol.cpp headers. {skipped} skipped.")

if __name__ == "__main__":
    main()
