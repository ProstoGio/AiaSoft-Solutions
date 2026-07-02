# Explanation — 532. მოხეტიალე ცხენი

## Approach

This is a classic shortest-path problem on a grid, so BFS is the natural choice. The twist here is that the allowed moves depend on the character written on your current cell. Instead of the standard eight knight moves, you check the character at (i, j) and filter the eight possibilities to only those that follow the direction constraint—like if it's 'U', you only allow moves where the new row index is smaller than the current one. Since we want the minimum number of moves, BFS guarantees the first time we hit (N, M), it’s via the shortest path.

## Complexity

| | |
|-|--|
| Time | O(N * M) |
| Space | O(N * M) |

## Key Insights

- Instead of a static graph, you effectively have a dynamic adjacency list where edges are determined by the cell's character at runtime.
- The 'U', 'D', 'L', 'R' constraints don't block all knight moves, just subsets of them, so you're still exploring a sparse state space.

## Common Mistakes

- Forgetting to check the boundaries for all four directions when a cell has a specific constraint.
- Re-visiting states multiple times, which will cause a TLE on larger grids if you aren't using the 'used' array properly.

## Walkthrough

Start at (1, 1). If the cell is 'R', only consider knight jumps where the column increases. Add valid landing spots to the queue with a distance of d+1. Repeat until (N, M) is popped from the queue or it's empty.
