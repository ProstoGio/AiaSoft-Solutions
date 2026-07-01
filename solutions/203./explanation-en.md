# Explanation — 203. ბაბის უყვარს კომბოსტო

## Approach

This is a classic DP problem where we decide how to skip steps to satisfy the 'no three in a row' rule. At each step `i`, we have three options: don't take the cabbage at `i`, take it but skip the one before it, or take both `i` and `i-1` and skip `i-2`. By keeping track of the best result at every position, we build the final answer up from the base cases.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The recurrence relation dp[i] = max(dp[i-1], dp[i-2]+v[i], dp[i-3]+v[i-1]+v[i]) covers all valid configurations at any given step.
- Base cases for n=1 and n=2 are trivial since the constraint only kicks in when you try to take three in a row.

## Common Mistakes

- Forgetting to handle the small cases (n=1, n=2) separately, which can cause out-of-bounds indexing in the recurrence loop.

## Walkthrough

For input [10, 20, 30, 40], dp[1]=10, dp[2]=30. At i=3, we check: don't take index 3 (dp[2]=30), take 3 but skip 2 (dp[1]+30=40), or take 3 and 2 but skip 1 (dp[0]+20+30=50). Max is 50. Then proceed to 4.
