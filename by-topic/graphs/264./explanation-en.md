# Explanation — 264. კომპონენტების რაოდენობა

## Approach

To find the number of connected components, I used the Disjoint Set Union (DSU) data structure. Basically, each vertex starts in its own individual set. Every time an edge connects two vertices, I merge their respective sets. Once all edges are processed, any vertex that is still its own parent represents the 'root' of a unique component. Just counting these roots gives the answer.

## Complexity

| | |
|-|--|
| Time | O(M * α(N)) |
| Space | O(N) |

## Key Insights

- The DSU approach is much cleaner here than running BFS or DFS from every unvisited node.
- Tracking the roots is the key; whenever a vertex points to itself, that's the canonical ID of a component.

## Common Mistakes

- Forgetting to initialize the parent array where each index points to itself initially.
