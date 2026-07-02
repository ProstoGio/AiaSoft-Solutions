# Explanation — 298. ცხენის სვლა

## Approach

This is a classic shortest path problem on an unweighted grid, which screams Breadth-First Search. Since a knight's move is just a fixed offset, I treated each cell as a graph node and the knight's possible jumps as edges. BFS is perfect here because it naturally explores the board layer by layer, guaranteeing the first time we hit the target coordinates, we've found the minimum number of moves. I used a simple 2D array to keep track of visited cells and store the distance from the start.

## Complexity

| | |
|-|--|
| Time | O(N * M) |
| Space | O(N * M) |

## Key Insights

- Using a queue for BFS ensures we reach the target in the fewest moves possible.
- Checking bounds (1 to N, 1 to M) before jumping is crucial to avoid out-of-bounds segfaults.

## Common Mistakes

- Forgetting to mark nodes as 'visited' immediately when pushing to the queue, which leads to infinite loops or redundant processing.
