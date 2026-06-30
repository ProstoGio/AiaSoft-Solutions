import os
import re

# ==================== CONFIGURATION ====================
SOLUTIONS_DIR = "solutions"
# =======================================================

EN_TEMPLATE = """\
# Explanation — {num}. <!-- problem name -->

## Approach

<!-- 3–8 sentences explaining your strategy in plain language -->

## Complexity

| | |
|-|--|
| Time | O(?) |
| Space | O(?) |

## Key Insights

- <!-- first key insight -->

## Common Mistakes

- <!-- optional -->

## Walkthrough

<!-- optional: trace through a sample input step by step -->
"""

GE_TEMPLATE = """\
# განმარტება — {num}. <!-- პრობლემის სახელი -->

## მიდგომა

<!-- ახსენით თქვენი სტრატეგია მარტივ ენაზე -->

## სირთულე

| | |
|-|--|
| დრო | O(?) |
| მეხსიერება | O(?) |

## მთავარი დაკვირვებები

- <!-- პირველი დაკვირვება -->

## ხშირი შეცდომები

- <!-- არასავალდებულო -->

## ნაბიჯ-ნაბიჯ ახსნა

<!-- არასავალდებულო: გაიარეთ მაგალითი ნაბიჯ-ნაბიჯ -->
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

    migrated = 0
    skipped = 0

    for folder_name in folders:
        folder_path = os.path.join(SOLUTIONS_DIR, folder_name)
        padded = folder_name.rstrip(".")

        old_path = os.path.join(folder_path, "explanation.md")
        en_path  = os.path.join(folder_path, "explanation-en.md")
        ge_path  = os.path.join(folder_path, "explanation-ge.md")

        # already migrated
        if os.path.exists(en_path) and os.path.exists(ge_path):
            skipped += 1
            continue

        if os.path.exists(old_path):
            with open(old_path, encoding="utf-8") as f:
                old_content = f.read()

            # if old file still has placeholder content, just replace with fresh templates
            is_template = "your strategy" in old_content or "<!--" in old_content[:60]

            if is_template:
                # fresh bilingual templates
                with open(en_path, "w", encoding="utf-8") as f:
                    f.write(EN_TEMPLATE.format(num=padded))
                with open(ge_path, "w", encoding="utf-8") as f:
                    f.write(GE_TEMPLATE.format(num=padded))
            else:
                # real content exists — move it to EN (assume it was written in English)
                # and create a fresh GE template for translation later
                with open(en_path, "w", encoding="utf-8") as f:
                    f.write(old_content)
                with open(ge_path, "w", encoding="utf-8") as f:
                    f.write(GE_TEMPLATE.format(num=padded))

            os.remove(old_path)
            migrated += 1
        else:
            # no explanation.md existed — just create both fresh
            with open(en_path, "w", encoding="utf-8") as f:
                f.write(EN_TEMPLATE.format(num=padded))
            with open(ge_path, "w", encoding="utf-8") as f:
                f.write(GE_TEMPLATE.format(num=padded))
            migrated += 1

        # fix references inside the problem's README.md
        readme_path = os.path.join(folder_path, "README.md")
        if os.path.exists(readme_path):
            with open(readme_path, encoding="utf-8") as f:
                readme_content = f.read()

            new_readme = readme_content.replace(
                '| [`explanation.md`](explanation.md) | Approach & analysis |',
                '| [`explanation-en.md`](explanation-en.md) | Approach & analysis (English) |\n'
                '| [`explanation-ge.md`](explanation-ge.md) | განმარტება (ქართულად) |'
            )

            if new_readme != readme_content:
                with open(readme_path, "w", encoding="utf-8") as f:
                    f.write(new_readme)

    print(f"✅ Migrated {migrated} folders. {skipped} already had bilingual files.")

if __name__ == "__main__":
    main()
