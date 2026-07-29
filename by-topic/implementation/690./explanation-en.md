# Explanation — 690. საშუალო პროგრამისტული

## Approach

This problem is a simple implementation task where you just need to follow the formula provided in the statement. You take two integers, multiply them, subtract their sum, and check if the result is non-negative. If the calculated value is zero or greater, it's 'high'; otherwise, it's 'low'. Since the input constraints go up to 10^4, using 'long long' is safe, even though 'int' would technically work here too.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The definition of 'programmatic mean' is just (a * b) - (a + b).
- Pay attention to the edge case where the result is exactly 0, which still counts as 'high'.

## Common Mistakes

- Misinterpreting the condition for 'high' versus 'low'.
- Forgetting to include the negative case for integers.

## Walkthrough

Just read the two numbers into variables, compute the formula into a temporary variable, and use a simple if-else branch to print the result.
