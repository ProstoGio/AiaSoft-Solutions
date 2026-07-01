# Explanation — 306. მარიამის დაბადების დღე

## Approach

This is a classic Bipartite Graph check. Since Mary wants to split friends into two tables without conflict, we are essentially asking if the graph is 2-colorable. I use DFS to traverse every connected component, assigning each friend one of two colors, 1 or 0. If I ever find a neighbor already colored with the same value as the current node, the split is impossible, and I bail out immediately.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N + M) |

## Key Insights

- If you treat friends as nodes and conflicts as edges, the problem becomes checking if the graph is bipartite.
- You don't need to check every node in a loop if you've already visited it; use a simple `used` array to track progress.

## Common Mistakes

- Forgetting to handle disjoint components—if the graph isn't connected, you have to run DFS on every unvisited node.
- Accidentally exiting the loop without verifying all components.

## Walkthrough

Imagine nodes 1-2 and 3-4 have edges. DFS starts at 1 (color 1), moves to 2 (color 0). Once done, the loop hits 3, which is unvisited. It starts a new DFS from 3 (color 1) and moves to 4 (color 0). Everything is consistent, so it outputs YES.
