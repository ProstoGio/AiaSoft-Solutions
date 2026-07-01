# Explanation — 269. ხე

## Approach

To check if a graph is a tree, I focus on two core properties: it must be connected, and it must be acyclic. My code uses a DFS to traverse the graph while keeping track of visited nodes and the parent of each node to avoid flagging the reverse edge of a parent-child relationship as a cycle. If I encounter an already visited node that isn't the direct parent, that means I've found a cycle. By checking how many separate components exist via an outer loop, I ensure the entire structure is fully connected.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N) |

## Key Insights

- A tree with N nodes must have exactly one connected component, otherwise it's a forest.
- During DFS, if you hit a visited neighbor that isn't the parent, you've definitely found a cycle.

## Common Mistakes

- Forgetting to pass the parent node to the DFS function, which causes the algorithm to think every edge is a cycle.

## Walkthrough

Imagine N=3, M=2 (edges 1-2, 2-3). DFS starts at 1, visits 2, then visits 3. No visited neighbors are found other than parents, and the component counter stays at 1. Since ind=1, it prints YES. If there were an edge 1-3, DFS from 2 would see 1 as visited while processing 3, trigger a cycle alert, and exit early.
