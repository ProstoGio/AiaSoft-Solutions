# Explanation — 224. გადათხრილი გზები

## Approach

This is a classic connectivity problem where we just need to find a path from point A to B. Since we can't use the broken roads, the easiest way to model this is by ignoring those edges entirely during graph construction. Once we have a subgraph containing only the 'clean' roads, a standard BFS is the most natural way to find the shortest path. I used a parent array to keep track of where I came from so I could reconstruct the path backwards once I reached the destination.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N + M) |

## Key Insights

- Don't waste memory storing bad roads; just filter them out during the input phase.
- Using a parent array during BFS saves us from needing a second pass to figure out the route.

## Common Mistakes

- Forgetting to mark the start node as 'used' before the BFS queue starts.
- Trying to reverse the path incorrectly, resulting in an output starting from B instead of A.

## Walkthrough

If we have A=1, B=3, and roads (1,2,0) and (2,3,0), the BFS starts at 1, sets par[2]=1, and then par[3]=2. Backtracking from 3, we hit 2, then 1, and reversing that list gives us the valid 1 -> 2 -> 3 path.
