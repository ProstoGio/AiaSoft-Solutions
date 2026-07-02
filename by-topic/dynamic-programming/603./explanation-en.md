# Explanation — 603. მონეტების ჯამი

## Approach

This is a classic variation of the subset sum problem. I used a 2D DP table where dp[i][j] tracks if a sum 'j' can be formed using a subset of the first 'i' coins. For each new coin, you basically have two choices: either you ignore it and keep the sums you already found, or you add the coin's value to every previously reachable sum. It's a clean way to build up the state space without missing any combinations.

## Complexity

| | |
|-|--|
| Time | O(n * Σx) |
| Space | O(n * Σx) |

## Key Insights

- You don't need to actually store the subset; just a boolean or integer flag to mark which sums are 'unlocked'.
- The memory limit allows for a 2D array here, but you could actually optimize this to a 1D array if you iterate backwards to avoid reusing the same coin twice.

## Common Mistakes

- Forgetting to mark the coin itself as a possible sum before starting the loop.
- Allocating too little space for the max possible sum, which is 100 * 1000.

## Walkthrough

If coins are {2, 3}, first dp[0][2] = 1. Then for the second coin (3), we mark dp[1][3] as reachable, plus we take previous sums (2) and add 3 to get 5. So {2, 3, 5} are reachable.
