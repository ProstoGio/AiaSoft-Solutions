# Explanation — 331. გამყოფები

## Approach

When I first saw this, the most direct way to find divisors was to just check every number from 1 up to N. Since we're looking for what divides perfectly without a remainder, a simple modulo operator does the heavy lifting. I used a while loop to iterate through every candidate, checking `n % i == 0` for each one. It's not the fastest way to handle large numbers, but for this specific constraint, it gets the job done cleanly.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- The modulo operator is the standard tool here; if the result is zero, the current iterator is definitely a factor.
- While looping up to the square root of N is technically more efficient for large constraints, a simple linear pass is perfectly fine for basic problems like this.

## Common Mistakes

- Forgetting to output a space between the numbers, which can lead to presentation errors on some judges.
