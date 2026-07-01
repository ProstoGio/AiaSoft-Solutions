# Explanation — 917. ჭიანჭველები

## Approach

This is a classic bipartite coloring problem. Since we're coloring halls with two colors such that no two connected ones match, we can just run a DFS to try coloring nodes layer by layer. If I reach a node that's already colored and its color matches the current one, the graph isn't bipartite, so I just print 'NO' and kill the program.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N + M) |

## Key Insights

- A graph is bipartite if and only if it contains no odd-length cycles.
- Using `exit(0)` is a quick hack to stop execution the moment we find a conflict, saving us from checking the rest of the graph unnecessarily.

## Common Mistakes

- Forgetting to run the DFS on all connected components in case the graph is disconnected.

## Walkthrough

Start at node 1 (color 1). Its neighbors get color 0. If you hit a neighbor that already has color 0, you're fine. If you bump into a neighbor that already has color 1, you've found an odd cycle—the whole thing fails.
