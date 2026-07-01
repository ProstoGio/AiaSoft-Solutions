# Explanation — 624. წიბოს ხარისხი

## Approach

This problem is basically about identifying what happens to the tree when you remove a single edge. Removing any edge splits the graph into two separate components. If the sizes of these two components are A and B, then any path that uses this specific edge must start in one component and end in the other. That gives us A * B possible paths, which is exactly the 'quality' we're looking for.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The sum of the sizes of the two components will always be n, so if one side has size 'cnt', the other is simply 'n - cnt'.
- A simple DFS is enough to precalculate the size of the subtree rooted at each node, which makes finding component sizes for any edge trivial.

## Common Mistakes

- Forgetting to use 'long long' for the result calculation, which will definitely overflow standard integers given the constraints.

## Walkthrough

For an edge connecting u and v, assume the subtree at the child node (say, v) has size 'cnt'. This subtree forms one component, and the rest of the tree forms the other. We multiply these two to get the answer.
