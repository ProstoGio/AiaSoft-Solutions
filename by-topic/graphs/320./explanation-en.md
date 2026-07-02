# Explanation — 320. ტალღა მატრიცაში

## Approach

This is a classic Breadth-First Search (BFS) problem disguised as a wave propagation grid. Since the wave spreads out uniformly from the center, we treat the grid as an unweighted graph where each cell is a node. By starting from (x, y) and pushing neighbors into a queue, we calculate the distance for each cell layer by layer. It's essentially just calculating the shortest path in an unweighted grid from the source.

## Complexity

| | |
|-|--|
| Time | O(N*M) |
| Space | O(N*M) |

## Key Insights

- BFS naturally processes nodes in increasing order of distance, which is exactly what 'wave' propagation implies.
- The state is defined by the coordinates (r, c), and we track visited nodes to avoid infinite loops and redundant calculations.

## Common Mistakes

- Forgetting to check matrix boundaries before accessing the array, which leads to segmentation faults.
- Not marking nodes as visited immediately upon pushing them into the queue, causing the queue to explode with duplicate entries.

## Walkthrough

Start at (x, y) with distance 0. Grab it from the queue, look at all 8 possible directions (including diagonals if the logic requires it), and if a neighbor hasn't been visited, assign it dist[current]+1 and throw it into the queue. Keep doing this until the queue is empty and the entire matrix is filled.
