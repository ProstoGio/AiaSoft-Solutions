# Explanation — 389. სრულყოფილი რიცხვი

## Approach

The definition of a perfect number is straightforward: the sum of all its proper divisors must equal the number itself. Since the input constraint is small (up to 10⁵), a simple linear scan is perfectly fine. I just run a loop from 1 up to n-1, check for divisibility using the modulo operator, and accumulate those divisors into a variable. If the final sum matches n, it's a 'yes'.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- The definition excludes the number itself from the divisor sum, so the loop must strictly stop at n-1.
- Given the constraint n <= 10⁵, a linear scan performs around 10⁵ operations, which comfortably fits within the 1-second time limit.

## Common Mistakes

- Starting the loop from 0, which would cause a runtime error due to division by zero.
- Forgetting that a perfect number doesn't include itself in the sum.
