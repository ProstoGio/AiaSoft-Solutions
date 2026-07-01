# Explanation — 905. ფიფქების სამკუთხედი

## Approach

This is a classic nested loop exercise. The outer loop handles the rows, moving from 1 up to N, while the inner loop simply prints the exact number of stars needed for that specific row. Since the i-th row requires exactly i stars, the inner loop constraint `j <= i` does all the heavy lifting for me. It's clean, efficient, and gets the job done without overcomplicating things.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(1) |

## Key Insights

- The relationship between the current row number and the number of stars is linear; row i always needs i stars.
- Using two loops is the most readable way to handle this grid-like structure.

## Common Mistakes

- Confusing the loop limits and accidentally printing N+1 lines or starting from 0 instead of 1.
