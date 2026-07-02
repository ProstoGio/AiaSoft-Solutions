# Explanation — 452. კვადრების ქვეყანა

## Approach

This is a classic variation of the Change-Making problem, but with perfect squares instead of coins. I used dynamic programming here, where each state dp[i] represents the minimum number of square pieces needed to sum up to exactly i. I initialize the array with a high value to represent infinity and mark all perfect squares as 1, since those only need a single piece. From there, I just iteratively build up the solution by checking every possible last square added to reach sum i.

## Complexity

| | |
|-|--|
| Time | O(N * sqrt(N)) |
| Space | O(N) |

## Key Insights

- Instead of trying to be clever with greedy choices, DP ensures we explore all combinations without missing the global minimum.
- Since N is only 60,000, N*sqrt(N) is roughly 14 million operations, which comfortably fits within the 1-second time limit.

## Common Mistakes

- Trying a greedy approach where you always subtract the largest possible square—that fails on cases like 12 (4+4+4 is better than 9+1+1+1).

## Walkthrough

If we look at N=12: dp[1]=1, dp[4]=1, dp[9]=1. To find dp[12], the DP checks dp[12-1^2]+1, dp[12-2^2]+1, and dp[12-3^2]+1. That's dp[11]+1, dp[8]+1, and dp[3]+1. The algorithm eventually finds that 4+4+4 gives the minimum value of 3.
