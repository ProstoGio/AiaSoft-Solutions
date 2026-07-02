# Explanation — 332. გამყოფები 1

## Approach

The goal is just to find all divisors of N. My first instinct was to check every number from 1 to N, but that's overkill since no divisor (other than N itself) can be greater than N/2. The code iterates up to N/2, checking divisibility with the modulo operator at each step. I initialized the counter at 1 because N is always divisible by itself, so we just add up all the smaller divisors we find along the way.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- Any proper divisor of N must be less than or equal to N/2.
- Starting the count at 1 handles the 'N itself' case automatically.

## Common Mistakes

- Forgetting to include N itself in the count if you only loop up to N/2.
