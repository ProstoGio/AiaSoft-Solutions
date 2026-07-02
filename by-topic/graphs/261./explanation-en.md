# Explanation — 261. მეზობლების მატრიცა

## Approach

This problem is basically asking us to map edge pairs into a square grid. Since the graph is undirected, when I get an edge between u and v, I just set both g[u][v] and g[v][u] to 1. The constraints are tiny—N is at most 20—so a 2D array is perfectly fine and super easy to manage. I initialize everything to zero first, then fill in the connections as I read the input. Finally, printing the matrix is just two nested loops.

## Complexity

| | |
|-|--|
| Time | O(N² + M) |
| Space | O(N²) |

## Key Insights

- Because the graph is undirected, the adjacency matrix must be symmetric, meaning g[u][v] == g[v][u].
- Using an array size of N+1 avoids dealing with zero-based indexing, which makes matching the input node numbers 1-to-1 much cleaner.

## Common Mistakes

- Forgetting to initialize the matrix to zeros, which could lead to garbage values in cells that don't have edges.
