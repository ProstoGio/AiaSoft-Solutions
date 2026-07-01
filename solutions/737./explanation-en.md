# Explanation — 737. ცვლილება რიცხვში

## Approach

To get the biggest number possible, you just need to find the very first digit that isn't a '9' and bump it up to a '9'. Since the number is treated as a string, swapping any digit with a 9 increases the value of the number significantly. The earlier the digit appears, the higher the place value, so we only care about the first one we find. If the number is already all nines, we just leave it alone since the problem says we can change 'at most' one digit.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Greedy logic works here because changing the leftmost non-nine digit always results in a larger number than changing any digit to its right.
- The input is a string, which makes it super easy to swap characters in place without worrying about integer overflow.

## Common Mistakes

- Trying to use integer math instead of strings, which will fail for large inputs since 10^3 digits exceeds long long limits.
