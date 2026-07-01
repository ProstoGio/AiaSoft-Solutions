# Explanation — 928. მიმდევრობები

## Approach

This is a classic DP problem where the state is defined by the length of the sequence and the value of the last added element. Since each step only depends on the previous one, we just need to calculate how many valid sequences of length 'i' end with 'j'. For each number 'j' in a sequence, the only possible next values are 'j-k' and 'j+k', provided they stay within the range [1, m-1]. We sum these up for every position until we hit 'n', then add up all the possibilities for the final sequence length.

## Complexity

| | |
|-|--|
| Time | O(n * m) |
| Space | O(n * m) |

## Key Insights

- The state dp[i][j] keeps track of the number of valid sequences of length i ending with value j.
- The constraints are small enough (n, m < 50) that a 2D array is perfectly fine and avoids any tricky optimizations.

## Common Mistakes

- Forgetting to check the boundaries 1 and m-1 for the next element in the sequence.
- Using the wrong loop bounds for the final summation of answers.

## Walkthrough

If n=3, k=2, m=5: Start with length 1, where every number 1-4 has 1 sequence. For length 2, each dp[2][j] is the sum of valid predecessors. For instance, dp[2][3] = dp[1][1] + dp[1][5] (if 5 existed) = 1. We continue this dependency chain until length 3.
