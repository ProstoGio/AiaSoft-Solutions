# Explanation — 275. ცხოველები - 1

## Approach

This problem is basically asking whether the given graph is bipartite. We just need to check if we can color the vertices with two colors such that no two adjacent animals share the same color. A standard DFS works perfectly here—when visiting a node, I just assign it the opposite color of its parent. If I encounter an already-visited neighbor that has the same color as the current node, I know right away that the graph isn't bipartite and the request is impossible.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N + M) |

## Key Insights

- The problem translates directly to a Bipartite Graph check.
- Using two colors (0 and 1) is sufficient; if we ever find a conflict, we just print 'NO' and exit immediately.

## Common Mistakes

- Forgetting to check the graph if it is disconnected; you need to loop through every node from 1 to N to make sure you catch all components.

## Walkthrough

Imagine N=3, connections (1,2) and (2,3). DFS starts at 1 (color 1). Next, it moves to 2, coloring it 0. Finally, it visits 3, coloring it 1. Since no node violates the color constraint against its neighbors, we finish the loop and print 'YES'.
