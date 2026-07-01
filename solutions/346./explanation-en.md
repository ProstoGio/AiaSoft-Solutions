# Explanation — 346. შეტყობინება

## Approach

This is a classic variation of the 'decoding ways' problem. Since each Georgian letter maps to a value from 1 to 33, and spaces are 0, we treat the input string as a sequence where we can either take a single digit or pair two adjacent digits to form a number. I used a DP array where each index stores the total number of ways to interpret the string up to that point. If a two-digit number is valid (between 10 and 33), we add the result from two positions back to our current state, otherwise, we just carry forward the previous count.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The 0 acts as a hard break for pairing; you can't combine a digit with 0 to make a two-digit number since letters start at 1.
- The transition logic depends on whether the two-digit window is <= 33. If it is, that's a branching point where two different decoding paths meet.

## Common Mistakes

- Forgetting to handle the edge case where a '0' appears, which cannot be part of a two-digit number.
- Miscounting the boundaries when the index is 0 or 1, leading to an index out-of-bounds error.

## Walkthrough

For input '19': dp[0] is 1 ('1'). For '19', n=19, which is <= 33, so dp[1] = dp[0] + 1 (the single '19' and the '1' followed by '9').
