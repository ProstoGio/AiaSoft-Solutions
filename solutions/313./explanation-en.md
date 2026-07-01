# Explanation — 313. 0 და 1

## Approach

This is a classic variation of the Fibonacci sequence, though it might not look like it at first. If you try to build strings of length N, you'll realize that any valid string of length N must end in either a 0 or a 1. If it ends in 0, the previous bit can be anything, meaning we have dp[N-1] ways. If it ends in 1, the bit before it must be 0, giving us dp[N-2] ways. Summing those up gives you the recurrence relation.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The sequence follows the Fibonacci pattern because a valid bit string of length N is just a valid string of length N-1 appended with '0', or a valid string of length N-2 appended with '01'.
- Setting up your base cases correctly for N=1 and N=2 is the only way to avoid off-by-one errors.

## Common Mistakes

- Starting the Fibonacci sequence from wrong indices or missing the fact that N=1 has two possibilities: '0' and '1'.

## Walkthrough

For N=3: We can have 000, 001, 010, 100, 101. Total is 5. Using our DP: dp[3] = dp[2] + dp[1] = 3 + 2 = 5. It matches perfectly.
