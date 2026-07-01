# Explanation — 044. კუბიკების კიბე

## Approach

This problem is basically counting partitions of an integer into strictly decreasing parts. You can think of it as a DP where the state `d[i][j]` tracks how many ways we can build a staircase using `i` total cubes where the top step uses exactly `j` cubes. To get the next step, we just need to look at previous states where the top part was strictly smaller than `j`, allowing us to add our current layer of `j` cubes on top.

## Complexity

| | |
|-|--|
| Time | O(n³) |
| Space | O(n²) |

## Key Insights

- The key is defining the state by both the total count of cubes and the size of the top layer to ensure the 'strictly decreasing' constraint is satisfied.
- By summing up `d[n][i]` for all possible top layer sizes `i`, you get the total number of valid staircases.

## Common Mistakes

- Forgetting to initialize the single-layer case (where you just use all cubes for one big step) which leads to off-by-one errors.

## Walkthrough

For n=5: if we have a top step of 2, we look at all ways to build 3 cubes (5-2) where the top step was smaller than 2 (i.e., size 1). So d[5][2] pulls from d[3][1]. Repeat until you sum all possible top-layer configurations.
