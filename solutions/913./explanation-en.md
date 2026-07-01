# Explanation — 913. მანდარინები და ფორთოხლები

## Approach

This one is a classic disguised GCD problem. Since we need to split both fruit piles into an equal number of levels with the same amount of fruit in each, we are basically looking for a common divisor of N and M. To maximize the height of the towers, we just need the greatest common divisor. It's a clean application of the Euclidean algorithm that handles large inputs efficiently without breaking a sweat.

## Complexity

| | |
|-|--|
| Time | O(log(min(N, M))) |
| Space | O(1) |

## Key Insights

- The number of levels must be a common divisor of both N and M, so maximizing it points directly to GCD.
- C++'s __gcd() is super convenient and runs in logarithmic time, which is plenty fast for values up to 10^9.

## Common Mistakes

- Trying to iterate up to the smallest number, which would definitely TLE (Time Limit Exceeded) for large inputs.
