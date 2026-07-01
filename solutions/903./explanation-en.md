# Explanation — 903. ქალაქ ბაიას მერი

## Approach

This is a classic degree calculation problem in an undirected graph. Since the constraints are small (N up to 100), we can represent the city streets using an adjacency matrix. By keeping track of how many connections each node has, we simply scan through to find the highest count. The tricky part is the tie-breaking condition; when two squares have the same number of streets, we have to pick the one with the higher ID, so I update the result whenever I find a square that is equal to OR greater than my current maximum.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- An adjacency matrix is perfect here because N is small enough that O(n²) space won't hit any memory limits.
- Updating the index whenever current_degree >= max_degree automatically handles the 'choose the largest ID' requirement.

## Common Mistakes

- Forgetting to handle the tie-breaking rule, which explicitly asks for the largest index in case of a draw.
