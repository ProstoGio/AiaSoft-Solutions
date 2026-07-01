# Explanation — 204. კალია გრასი

## Approach

This is a classic dynamic programming problem where we work backward from the target leaf to the start. Instead of trying to guess which jumps get us to n, it's way easier to ask 'how do I get to x' by checking the three possible previous states: x-1, x/2, and x/3. I used memoization to store results I've already calculated so we don't recompute the same leaf positions over and over. It turns a potentially exponential recursive tree into a simple, efficient calculation.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Working backward is the trick; it's much more intuitive to ask where we came from than where we're going.
- The memoization array is essential here, otherwise the recursion depth would blow up immediately.

## Common Mistakes

- Forgetting to check if x is divisible by 2 or 3 before attempting the division, which would lead to garbage results.

## Walkthrough

If n=10, the function checks: to get to 10, we could have come from 9 (10-1) or 5 (10/2). To find the min for 9, it checks 8 (9-1) or 3 (9/3). It keeps breaking these down until it hits 1, then propagates the minimum count back up the call stack.
