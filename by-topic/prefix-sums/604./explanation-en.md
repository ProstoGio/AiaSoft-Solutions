# Explanation — 604. შეკითხვები ტყეზე

## Approach

This is a classic 2D prefix sum problem. Since we have to answer thousands of range queries on a grid, re-calculating the sum every time would lead to a TLE error. Instead, we precompute a 2D array where each cell (i, j) stores the total number of trees from (0,0) to that point. This turns any rectangular query into a constant-time O(1) calculation using the inclusion-exclusion principle.

## Complexity

| | |
|-|--|
| Time | O(N² + Q) |
| Space | O(N²) |

## Key Insights

- The recurrence d[i][j] = current + above + left - diagonal_overlap is the secret sauce to building the prefix sum table efficiently.
- By subtracting the areas outside the top and left of your target rectangle and adding back the top-left corner that got subtracted twice, you land on the exact count in one go.

## Common Mistakes

- Mixing up 1-based coordinates from the input with 0-based indices in the matrix often leads to off-by-one errors.

## Walkthrough

If you need the sum for a rectangle defined by (x0, y0) to (x1, y1), you take the sum at (x1, y1), subtract the regions above it and to the left of it, and add the top-left intersection back because you removed it twice.
