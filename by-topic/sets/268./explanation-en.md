# Explanation — 268. ციკლი გრაფში

## Approach

This is a classic use case for Disjoint Set Union (DSU). Since we are dealing with an undirected graph, a cycle exists if we try to add an edge between two vertices that are already in the same connected component. I used path compression in the `find_set` function to keep the operations nearly constant time. The logic is simple: for every edge, check if the endpoints share a representative; if they do, we've found a loop and can stop immediately.

## Complexity

| | |
|-|--|
| Time | O(m * α(n)) |
| Space | O(n) |

## Key Insights

- If you find an edge connecting two nodes that are already reachable from each other, that edge closes a cycle.
- Path compression turns the find operation into an almost constant-time check.

## Common Mistakes

- Forgetting to initialize the parent array where each node is its own parent initially.
- Trying to use DFS or BFS when a simpler DSU structure handles connectivity checks more cleanly.
