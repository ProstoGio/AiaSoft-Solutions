# Explanation — 548. ოთახების დათვლა

## Approach

This problem is basically asking us to find the number of connected components in a grid. I treated every '.' cell as a node in a graph and the adjacent cells as edges. The easiest way to handle this is to iterate through every cell; whenever I hit an unvisited '.', I know I've found a new room. I then trigger a DFS from that point to mark every single reachable cell as visited so I don't count the same room twice.

## Complexity

| | |
|-|--|
| Time | O(n * m) |
| Space | O(n * m) |

## Key Insights

- The grid boundaries are tricky, so I used explicit checks (i > 1, i < n, etc.) to keep the DFS from jumping out of the matrix.
- Using a separate 'used' array is vital. Without it, the recursion would loop back and forth between two empty cells forever.

## Common Mistakes

- Forgetting to check the 'used' status before calling DFS, which leads to a stack overflow.
- Miscalculating boundary conditions and trying to access an out-of-bounds index.

## Walkthrough

Imagine a 3x3 grid. Start at (1,1). If it's a '.', start DFS. DFS marks (1,1) as used, looks at neighbors, moves to any valid neighbor, and marks those too. Once that recursion finishes, back in main(), increment 'cnt'. Repeat until you hit the end of the grid.
