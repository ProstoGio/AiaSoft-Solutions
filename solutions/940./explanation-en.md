# Explanation — 940. მარტივი ციკლები

## Approach

At first glance, counting 'simple cycles' sounds like you need to run DFS or build an adjacency list to find actual cycles. But when you look at the definition of a simple cycle in this context, it's just a fancy way of asking how many edges create a redundant connection. Every time you process an edge where both nodes are already in the same connected component, that specific edge completes exactly one new cycle. DSU is perfect here because it tracks connectivity efficiently without needing the graph structure explicitly.

## Complexity

| | |
|-|--|
| Time | O(M * α(N)) |
| Space | O(N) |

## Key Insights

- Any edge connecting two vertices already in the same DSU set is effectively closing a cycle.
- The total count of these redundant edges is exactly the number of fundamental cycles in the graph.

## Common Mistakes

- Overcomplicating the solution with DFS or BFS when you only need to check connectivity.
