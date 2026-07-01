# Explanation — 265. უდიდესი კომპონენტი

## Approach

This is a classic Disjoint Set Union (DSU) problem. Since we just need to group connected vertices together, DSU is perfect because it handles merges in nearly constant time. I start by initializing each node as its own parent, then simply run 'union' operations for every edge given. Once all edges are processed, I re-run 'find' on every node to ensure everyone points to their actual root. Finally, I count how many nodes share the same root and keep track of the maximum group size found.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n) |

## Key Insights

- The Union-Find structure collapses the connectivity logic down to a simple parent pointer lookup.
- Re-running find on every node after all unions is a quick way to normalize the structure so you can easily count components.

## Common Mistakes

- Forgetting to perform a final path compression pass (or re-finding roots) before counting, which leads to incorrect sizes.
