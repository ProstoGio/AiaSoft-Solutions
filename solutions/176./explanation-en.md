# Explanation — 176. კიბე

## Approach

This is essentially just a Fibonacci sequence in disguise. Think about the last move: to land on the nth step, Tiniko must have arrived from either the (n-1)th step or the (n-2)th step. Adding these two possibilities together gives the total number of ways for the current step. I just built an array where each index stores the count for that specific step, filling it up iteratively until I hit N.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- If you're at step N, you came from a jump of 1 (from N-1) or a jump of 2 (from N-2).
- The base cases are simple: 1 way to reach step 1, 2 ways to reach step 2.

## Common Mistakes

- Off-by-one errors when indexing the array, especially since stair numbering usually starts at 1 but arrays start at 0.
