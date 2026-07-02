# Explanation — 530. გზის აშენება

## Approach

This problem is basically about finding connected components in an undirected graph. Since we want to make the whole graph connected with the minimum number of edges, we just need to join each separate component together. If you have K components, you need K-1 edges to link them all into one chain. I use a DFS to visit every node in a component, storing one representative node from each as I finish the traversal.

## Complexity

| | |
|-|--|
| Time | O(n + m) |
| Space | O(n + m) |

## Key Insights

- Any set of K disjoint components can be linked into a single connected graph using exactly K-1 bridges.
- You don't need to link every node; just picking one 'exit' node from each component is enough to form a chain.

## Common Mistakes

- Forgetting to handle the edge case where the graph is already connected (K=1), which results in 0 edges needed.

## Walkthrough

Imagine 3 disconnected islands. DFS 1 visits everything in Island A and saves its last node. Then we find an unvisited node in Island B, run DFS, and save that node. Finally, we do the same for Island C. We end up with a list of nodes [nodeA, nodeB, nodeC] and output edges (nodeA, nodeB) and (nodeB, nodeC).
