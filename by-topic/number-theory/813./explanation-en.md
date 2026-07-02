# Explanation — 813. სიმეტრიულის გამყოფები

## Approach

To flip the number, I just used the classic modulo and division trick to extract digits one by one and rebuild the integer in reverse order. Once I had that reversed number, counting its divisors seemed easy enough with a loop up to the square root. Checking up to the square root is much faster than checking every number, and it keeps the program well within the time limits.

## Complexity

| | |
|-|--|
| Time | O(sqrt(N)) |
| Space | O(1) |

## Key Insights

- Reversing an integer is just basic arithmetic; no need to convert it to a string unless you really want to.
- When counting divisors, checking up to the square root allows you to find pairs of divisors at once, which is a massive performance boost.

## Common Mistakes

- Forgetting that if a number is a perfect square, the square root shouldn't be counted twice.
