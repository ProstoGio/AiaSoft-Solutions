# Explanation — 628. კლონების არმია

## Approach

This problem boils down to a modified BFS because we want to maximize the clone count at each node. Since the number of clones decreases only when they are outnumbered by droids, this looks like a shortest path variant where the 'cost' is the survival of our army. We track the max clones possible at every room using an array `dp`, updating neighbors only if we can reach them with a larger army than previously recorded. It’s essentially Dijkstra-style relaxation, but since we don't have standard edge weights, a simple queue works fine as long as we only push nodes when we improve their clone count.

## Complexity

| | |
|-|--|
| Time | O(m log n) or O(m) depending on queue behavior |
| Space | O(n + m) |

## Key Insights

- The state doesn't need to track the exact path, just the current maximum clone count at each vertex.
- Since division by 2 happens repeatedly, the number of successful updates per node is actually quite small, which keeps the BFS efficient.

## Common Mistakes

- Using a standard visited array which prevents updating a node if a 'better' path is found later.

## Walkthrough

Start at node 1 with x clones. For every neighbor, calculate `new_clones = (current_clones > droids[neighbor]) ? current_clones : current_clones / 2`. If `new_clones > dp[neighbor]`, update `dp[neighbor]` and add it to the queue to propagate the result.
