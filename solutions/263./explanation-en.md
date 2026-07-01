# Explanation — 263. წვეროების რაოდენობა კომპონენტში

## Approach

This one is a classic connectivity problem. Since I need to count how many vertices are reachable from a starting point V, DFS is the most straightforward tool. I represent the graph using an adjacency matrix, which is perfectly fine here since N is only 20. Every time I hit a new vertex that hasn't been visited yet, I increment my counter and jump into its neighbors. It's essentially just exploring a chunk of the graph until there's nothing left to see.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- Using a simple boolean 'used' array prevents the DFS from getting stuck in infinite loops when the graph has cycles.
- An adjacency matrix is easy to implement for small constraints like N=20 and makes checking for connections between any two vertices instant.

## Common Mistakes

- Forgetting to mark the starting vertex as visited before starting the recursion, which can lead to double counting.
