# Explanation — 198. რეაქტიული ბაბი

## Approach

This is essentially the Fibonacci sequence in disguise, but you have to watch out for the indices. Since Babi skips either one or two steps, reaching step 'i' depends on where he could have jumped from—either two or three steps back. I set up a DP array where each position stores the number of ways to reach that specific stair. It’s a classic recurrence relation: current = previous_two + previous_three.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The recurrence is dp[i] = dp[i-2] + dp[i-3] because of the specific jump constraints.
- Base cases are tricky; always double-check if your indexing maps correctly to the problem's step count.

## Common Mistakes

- Off-by-one errors when setting up the initial DP values versus the target index.
