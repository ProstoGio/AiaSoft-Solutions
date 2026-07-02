# Explanation — 743. ციფრთა ჯამი - 1

## Approach

This one is basically a brute force implementation. Since the upper bound for our input is only 10⁵, a simple loop iterating from a to b is perfectly fine. I wrote a helper function to peel off digits one by one using modulo 10, add them to a running total, and then truncate the number by dividing by 10. It gets the job done without overcomplicating things.

## Complexity

| | |
|-|--|
| Time | O(N log M) |
| Space | O(1) |

## Key Insights

- The log M factor comes from extracting digits, where M is the maximum value of the input numbers.
- Given the constraints, N is at most 10⁵, so this is blazing fast and won't hit any time limits.

## Common Mistakes

- Forgetting that if a > b, you might need to handle the loop order, although the problem implies a standard range.
