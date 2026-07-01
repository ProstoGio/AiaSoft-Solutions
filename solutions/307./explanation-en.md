# Explanation — 307. ჯამი მატრიცაში

## Approach

If you try to sum the rectangle for every query one by one, you'll hit O(Q * N * M), which is way too slow given the constraints. Instead, think of it as a 2D prefix sum problem. We precompute a matrix where each cell `d[i][j]` stores the sum of everything from `(1, 1)` to `(i, j)`. The trick is just inclusion-exclusion: add the current value, add the top and left rectangles, then subtract the top-left diagonal which you double-counted.

## Complexity

| | |
|-|--|
| Time | O(N * M + Q) |
| Space | O(N * M) |

## Key Insights

- The recurrence d[i][j] = d[i-1][j] + d[i][j-1] - d[i-1][j-1] + a[i][j] is the bread and butter of grid problems.
- Precomputing the whole grid once turns every O(N*M) range sum query into a simple O(1) array access.

## Common Mistakes

- Forgetting to handle the i=0 or j=0 boundary conditions, which usually leads to index out of bounds errors or just garbage data.
- Accidentally double-subtracting the corner element during the DP transition.

## Walkthrough

Imagine a 2x2 grid. To get the sum at (2, 2), you take the sum of the row above (1, 2) and the column to the left (2, 1). Since the corner (1, 1) was inside both of those, you subtract it once, then finally add your current cell's value.
