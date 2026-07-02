# Explanation — 430. ჭკვიანი თხუნელა

## Approach

If you look closely at the maze, it's actually a classic grid pathfinding problem disguised with some flavor text. When you draw it out, the geometry simplifies into a grid where the mole can only move right or down. Since the problem asks for the number of distinct paths from start to finish in an N-story maze, you quickly realize it's just a variation of finding the number of paths in an (N+1)/2 by (N+1)/2 grid using simple DP.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- The zigzag movement constraints effectively map the maze to a square grid where the mole moves from (1,1) to (m,m) where m = (n+1)/2.
- The path count is equivalent to the binomial coefficient, which we calculate using the standard Pascal's triangle recurrence: dp[i][j] = dp[i-1][j] + dp[i][j-1].

## Common Mistakes

- Trying to simulate the physical structure of the maze instead of abstracting it to a grid.
- Getting the dimensions wrong by miscounting the levels.

## Walkthrough

For N=5, we calculate m=(5+1)/2 = 3. We fill a 3x3 grid: dp[1][x]=1, dp[x][1]=1. Then, dp[2][2] becomes 1+1=2, dp[2][3]=3, dp[3][2]=3, and finally dp[3][3]=6.
