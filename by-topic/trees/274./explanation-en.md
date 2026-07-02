# Explanation — 274. ციკლები გრაფში - 2

## Approach

This problem is a classic application for Disjoint Set Union (DSU). Since we need to turn a connected graph into a tree, we just need to avoid cycles. As we iterate through each edge, we check if the two endpoints already belong to the same connected component. If they do, adding that edge would create a cycle, so we mark it to be removed. Otherwise, we union the sets of the two vertices.

## Complexity

| | |
|-|--|
| Time | O(M * α(N)) |
| Space | O(N) |

## Key Insights

- A tree with N nodes must have exactly N-1 edges and no cycles.
- The find_set function with path compression makes the DSU operations practically constant time.

## Common Mistakes

- Forgetting to perform the union operation even when an edge doesn't form a cycle.
- Using 0-based indexing when the problem input is explicitly 1-indexed.
