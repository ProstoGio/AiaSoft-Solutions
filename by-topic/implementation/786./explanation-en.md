# Explanation — 786. მარტივი რიცხვები N-მდე

## Approach

This problem is basically checking every number up to N to see if it's prime. My logic is simple: a prime number only has two divisors, 1 and itself. So, for every number I pick, I start testing potential divisors from 1 up to the square root of that number. If I find any divisor other than 1 that divides it evenly, I know it's not prime, but since I count how many divisors I find, I just check if that count equals exactly two.

## Complexity

| | |
|-|--|
| Time | O(n * sqrt(n)) |
| Space | O(1) |

## Key Insights

- You don't need to check divisors past the square root of a number, which saves a ton of processing time.
- The definition of a prime number is exactly two divisors, so checking for `k == 2` covers the edge cases perfectly.

## Common Mistakes

- Forgetting that 1 is not a prime number; my code naturally handles this by starting from 2.
- Checking divisors all the way up to N instead of stopping at the square root, which would be way too slow for larger N.
