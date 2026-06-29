import os
import re

# ==================== CONFIGURATION ====================
SOLUTIONS_DIR = "solutions"
# =======================================================

def is_solved(folder_path):
    sol_path = os.path.join(folder_path, "sol.cpp")
    if not os.path.exists(sol_path):
        return False
    with open(sol_path, encoding="utf-8") as f:
        return "your solution here" not in f.read()

def get_title(folder_path, padded):
    readme_path = os.path.join(folder_path, "README.md")
    if os.path.exists(readme_path):
        with open(readme_path, encoding="utf-8") as f:
            first_line = f.readline().strip()
        match = re.match(r'^#\s*\d+\.\s*(.+)$', first_line)
        if match:
            title = match.group(1).strip()
            if "problem name" not in title.lower() and title:
                return title
    return None

def build_readme(problem_id, title, padded):
    display_title = f"{padded}. {title}" if title else f"{padded}."
    problem_url   = f"https://aiasoft.ge/problem/{problem_id}"

    return f"""\
# {display_title}

<table>
  <tr>
    <td><b>Platform</b></td>
    <td><a href="https://aiasoft.ge">AiaSoft.ge</a></td>
  </tr>
  <tr>
    <td><b>Problem</b></td>
    <td><a href="{problem_url}">#{problem_id}</a></td>
  </tr>
  <tr>
    <td><b>Topic</b></td>
    <td><!-- Topic --></td>
  </tr>
  <tr>
    <td><b>Difficulty</b></td>
    <td><!-- Easy / Medium / Hard / Very Hard --></td>
  </tr>
  <tr>
    <td><b>Complexity</b></td>
    <td><!-- O(?) --></td>
  </tr>
</table>

---

## 📄 Files

| File | Description |
|------|-------------|
| [`statement.md`](statement.md) | Problem statement |
| [`explanation.md`](explanation.md) | Approach & analysis |
| [`sol.cpp`](sol.cpp) | C++ solution |

---

<sub>Part of <a href="../../README.md">AiaSoft Solutions</a> — C++ solutions to AiaSoft.ge problems</sub>
"""

def main():
    if not os.path.exists(SOLUTIONS_DIR):
        print("❌ solutions/ folder not found.")
        return

    folders = sorted([
        f for f in os.listdir(SOLUTIONS_DIR)
        if os.path.isdir(os.path.join(SOLUTIONS_DIR, f))
        and re.match(r'^\d+\.$', f)
    ])

    updated = 0
    skipped = 0

    for folder_name in folders:
        folder_path = os.path.join(SOLUTIONS_DIR, folder_name)

        if not is_solved(folder_path):
            skipped += 1
            continue

        problem_id = int(folder_name.rstrip("."))
        padded = str(problem_id).zfill(3)
        title = get_title(folder_path, padded)

        readme_path = os.path.join(folder_path, "README.md")
        content = build_readme(problem_id, title, padded)

        with open(readme_path, "w", encoding="utf-8") as f:
            f.write(content)

        label = title if title else "<!-- name -->"
        print(f"  ✅ {padded}. {label}")
        updated += 1

    print(f"\n🎉 Done — {updated} READMEs updated, {skipped} unsolved folders skipped.")

if __name__ == "__main__":
    main()
