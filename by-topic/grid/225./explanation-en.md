# Explanation — 225. ხალისოს დერეფანი

## Approach

This is a classic DP grid problem. Since you can only move from a cell to the three adjacent ones in the row below, you’re basically building a path of maximum sums incrementally. I just update the grid in-place: for every cell, I add the maximum value found among its three possible predecessors from the previous row. By the time I finish the last row, the answer is just the largest value sitting in that final set of cells.

## Complexity

| | |
|-|--|
| Time | O(n * m) |
| Space | O(n * m) |

## Key Insights

- Instead of recursion or memoization, you can just overwrite the current grid values with the running maximums.
- The 'neighbor' rule implies that cell (i, j) can only be reached from (i-1, j-1), (i-1, j), or (i-1, j+1), which simplifies the transition significantly.

## Common Mistakes

- Going out of bounds when checking the first and last columns—don't forget to handle indices j-1 and j+1 carefully, or just pad the grid with zeros.

## Walkthrough

If you have a cell at [2][2], you look at [1][1], [1][2], and [1][3], pick the max, and add it to a[2][2]. You keep repeating this until the whole grid represents the max possible sum to reach that specific spot.
