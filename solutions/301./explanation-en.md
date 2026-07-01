# Explanation — 301. ლაბირინთი

## Approach

Since we need the shortest path in an unweighted grid, Breadth-First Search is the absolute gold standard here. I treated the maze as a graph where each cell is a node and edges connect adjacent open spaces. By starting at 'S' and pushing coordinates into a queue, I expand layer by layer. The distance array 'd' keeps track of how many moves it took to reach each cell, ensuring that the first time I hit 'F', I've definitely found the minimum steps.

## Complexity

| | |
|-|--|
| Time | O(N * M) |
| Space | O(N * M) |

## Key Insights

- BFS naturally discovers nodes in increasing order of distance, which is why we don't need fancy heuristics like A* here.
- The 'used' array is vital; without it, you'd get stuck in infinite cycles or waste time re-visiting cells.

## Common Mistakes

- Forgetting to check the bounds of the matrix before accessing grid indices, which causes runtime errors.
- Updating the distance for a cell that has already been visited.
