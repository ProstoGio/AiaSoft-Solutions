# Explanation — 262. წიბოების რაოდენობა

## Approach

Since this is an undirected graph represented by an adjacency matrix, every edge between two distinct nodes gets counted twice—once at (i, j) and again at (j, i). The loops are the only exception since a self-loop appears only once in the matrix diagonal. I separated the counts into two variables: one for the off-diagonal edges and one for the self-loops. Dividing the off-diagonal count by two and adding the loop count gives the exact number of edges.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- The adjacency matrix for an undirected graph is symmetric, meaning you are essentially counting every edge twice unless it's a loop.
- Self-loops only occupy one cell in the matrix, so they shouldn't be divided by two.

## Common Mistakes

- Forgetting that self-loops don't follow the 'divide by two' rule, which leads to incorrect counts.
