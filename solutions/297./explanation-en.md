# Explanation — 297. უმოკლესი გზა

## Approach

Since this is an unweighted graph, finding the shortest path boils down to a classic BFS. You want to explore layer by layer, starting from the source vertex. I used an adjacency list to store the edges and a distance array to keep track of how many steps it takes to reach each node. The moment the queue hits our target node, we know we've found the absolute shortest path because BFS naturally discovers nodes in increasing order of distance.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N) |

## Key Insights

- Using BFS for unweighted graphs is the standard way to guarantee the shortest distance because it visits all neighbors before moving deeper.
- The `used` array is essential to avoid infinite loops and re-processing nodes we've already reached faster.

## Common Mistakes

- Forgetting to check if the target is unreachable and outputting -1.

## Walkthrough

Start at vertex A (distance 0). Push it to the queue. Pop A, look at neighbors, set their distance to 1, and push them. Keep doing this until you either pop B or the queue empties. If the queue empties and you never hit B, that's your sign it's disconnected.
