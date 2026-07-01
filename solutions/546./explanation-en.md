# Explanation — 546. ყველაზე შორს

## Approach

Since we're dealing with a simple tree rooted at 1, a standard BFS is the most natural way to calculate the distance of every node from the root. As I traverse, I store the depth of each node in an array and keep track of the maximum distance found so far. Once the queue is empty, I just scan the depth array one more time to collect all nodes that match that maximum value. It's straightforward and gets the job done without any fancy tree algorithms.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The distance between two nodes in a tree is defined here by the number of vertices, so starting the root at depth 0 or 1 doesn't matter as long as the relative difference is consistent.
- BFS naturally processes nodes level by level, making it perfect for distance tracking in an unweighted graph.

## Common Mistakes

- Forgetting to handle the graph as undirected by pushing both directions in the adjacency list.
