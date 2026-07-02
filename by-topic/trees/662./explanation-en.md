# Explanation — 662. ტყე

## Approach

The trick here is realizing that every time you cut an edge, you isolate a subtree. Since the whole tree has an even number of vertices, cutting off a subtree with an even number of nodes leaves the remaining graph with an even number of nodes too. By running a simple DFS, we can calculate the size of the subtree rooted at every node. If that subtree size is even, the edge connecting it to its parent is a perfect candidate to cut.

## Complexity

| | |
|-|--|
| Time | O(n + m) |
| Space | O(n) |

## Key Insights

- An edge can be removed if the subtree below it contains an even number of vertices, as this guarantees both the resulting component and the remainder of the tree stay even.
- Calculating subtree sizes is trivial with a post-order traversal during DFS.

## Common Mistakes

- Forgetting to handle the root case, though since the total count is even, you only care about edges between a node and its parent.

## Walkthrough

Start at node 1. As the recursion unwinds, add the size of the current node's subtree to its parent's counter. Every time you finish a subtree for a node i (where i > 1) and find that leaves[i] % 2 == 0, just increment your cut counter. That's it.
