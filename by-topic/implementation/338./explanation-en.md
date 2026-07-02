# Explanation — 338. საბავშვო მოედანი 1

## Approach

Since the chairs are arranged in a circle, the proximity logic is straightforward. Two seats are neighbors if their difference is exactly 1, but we have to handle the wrap-around case where chair 1 and chair N are adjacent. I just used a simple if-statement to check these two specific conditions. It's a quick check that avoids any unnecessary loops.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The seats are in a circle, so the adjacency isn't just |a-b| == 1; the pair (1, N) is a special case that breaks the standard arithmetic.
- You don't need a complex data structure here, just simple logic gates.

## Common Mistakes

- Forgetting the wrap-around case where seat 1 and N are side-by-side.
