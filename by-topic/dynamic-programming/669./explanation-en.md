# Explanation — 669. სანდრო და კამათელი

## Approach

This is a classic DP problem where each state depends on the previous six. To reach sum N, you can land on any position from i-6 to i-1 and roll the corresponding number to jump exactly to i. I used a simple vector to store the number of ways to reach each sum, updating forward from each reached index. Since the problem asks for the result modulo 10^9+7, I applied the modulo operator at every addition to keep the numbers within bounds.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- The recurrence relation is dp[i] = dp[i-1] + dp[i-2] + ... + dp[i-6].
- Setting dp[0] = 1 acts as the base case for the first roll.
- Updating forward is cleaner here than writing a nested loop for every state.

## Common Mistakes

- Forgetting the modulo 10^9+7 operation, which leads to integer overflow.
- Accessing out-of-bounds indices when i < 6.
- Misunderstanding the base case by setting dp[0] to 0 instead of 1.

## Walkthrough

Start by declaring a DP array of size 1,000,001. Initialize dp[0] to 1. Loop from 0 to N-1, and for each position, add the current count to all reachable indices (i+1 up to i+6). The value at dp[N] will hold your answer.
