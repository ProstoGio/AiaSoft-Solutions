import os

SOLUTIONS_DIR = "solutions"
START = 1
END = 940

README_TEMPLATE = """\
# {num}. <!-- problem name -->

> **Platform:** [AiaSoft.ge](https://aiasoft.ge) &nbsp;|&nbsp; **Problem:** [#{num}](https://aiasoft.ge/problem/{num})

| Field | Info |
|-------|------|
| 📂 Topic | <!-- Topic --> |
| ⭐ Difficulty | <!-- Easy / Medium / Hard / Very Hard --> |
| ⏱️ Complexity | <!-- O(?) --> |

## Files

| File | Description |
|------|-------------|
| [`statement.md`](statement.md) | Problem statement |
| [`explanation-en.md`](explanation-en.md) | Approach & analysis (English) |
| [`explanation-ge.md`](explanation-ge.md) | განმარტება (ქართულად) |
| [`sol.cpp`](sol.cpp) | C++ solution |

---

*Part of [AiaSoft Solutions](../../README.md) — solutions to AiaSoft.ge problems*
"""

STATEMENT_TEMPLATE = """\
# Problem Statement

> Copied from [AiaSoft.ge #{num}](https://aiasoft.ge/problem/{num})

## Task

<!-- paste problem statement here -->

## Input

<!-- input format -->

## Output

<!-- output format -->

## Constraints

<!-- e.g. 1 ≤ n ≤ 10⁶ -->

## Examples

### Example 1

**Input:**
```
```

**Output:**
```
```
"""

EXPLANATION_EN_TEMPLATE = """\
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

EXPLANATION_GE_TEMPLATE = """\
# განმარტება — {num}. <!-- პრობლემის სახელი -->

## მიდგომა

<!-- ახსენით თქვენი სტრატეგია მარტივ ენაწე -->

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

SOL_TEMPLATE = """\
// AiaSoft #{num} — <!-- problem name -->
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // your solution here

    return 0;
}}
"""

def main():
    os.makedirs(SOLUTIONS_DIR, exist_ok=True)

    created = 0
    skipped = 0

    for n in range(START, END + 1):
        num = f"{n:03d}"
        folder = os.path.join(SOLUTIONS_DIR, f"{num}.")

        if os.path.exists(folder):
            skipped += 1
            continue

        os.makedirs(folder)

        files = {
            "README.md":        README_TEMPLATE.format(num=num),
            "statement.md":     STATEMENT_TEMPLATE.format(num=num),
            "explanation-en.md": EXPLANATION_EN_TEMPLATE.format(num=num),
            "explanation-ge.md": EXPLANATION_GE_TEMPLATE.format(num=num),
            "sol.cpp":          SOL_TEMPLATE.format(num=num),
        }

        for filename, content in files.items():
            with open(os.path.join(folder, filename), "w", encoding="utf-8") as f:
                f.write(content)

        created += 1

    print(f"Done — {created} folders created, {skipped} already existed.")

if __name__ == "__main__":
    main()
