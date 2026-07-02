# Explanation — 312. უბრალოდ უმოკლესი მანძილი

## Approach

The core of this problem is that the graph isn't static; edges get added while we're answering queries. Since N is quite small (up to 1,000), we can afford to trigger a BFS whenever a new edge actually improves the shortest path to a vertex. Instead of re-running the whole thing from scratch, the code maintains a 'used' array to track reachable nodes and only propagates updates if the new edge provides a shorter path to the destination. It’s basically an incremental BFS that keeps the distance array current as edges trickle in.

## Complexity

| | |
|-|--|
| Time | O(M * (N + M)) |
| Space | O(N + M) |

## Key Insights

- You don't need a full re-run because you only care about updates that strictly decrease the distance to some node.
- Triggering the BFS specifically from the destination node of the new edge effectively 'ripples' the improvement through the rest of the graph.

## Common Mistakes

- Forgetting to check if the source vertex of a new edge is already reachable; if it's not, the new edge can't possibly help calculate a path from node 1.

## Walkthrough

Imagine edge 2->3 is added. If we already know how to get to 2, we update 3 and then queue 3 to see if its neighbors (like 3->4) can be reached faster than before. If 2 isn't reachable yet, we just store the edge and wait.
