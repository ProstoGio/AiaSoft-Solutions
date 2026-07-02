# Explanation — 035. ორი რიცხვის უდიდესი საერთო გამყოფი

## Approach

This is a classic use case for the Euclidean algorithm. Instead of trying to find factors manually, which would be way too slow given the 10^18 limit, you just keep replacing the larger number with the remainder of the division of the two numbers. It’s elegant because it shrinks the problem size exponentially with every step. You stop as soon as one number hits zero, leaving the other one as the GCD.

## Complexity

| | |
|-|--|
| Time | O(log(min(a, b))) |
| Space | O(log(min(a, b))) |

## Key Insights

- Euclid’s observation that gcd(a, b) = gcd(b, a % b) is the secret sauce here.
- The recursion depth is incredibly small even for huge inputs because the modulus operation reduces values drastically.

## Common Mistakes

- Forgetting to use 64-bit integers (unsigned long long) and causing overflows for inputs up to 10^18.
