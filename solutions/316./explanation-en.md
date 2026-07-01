# Explanation — 316. ნაყინები

## Approach

This problem is essentially a variation of the change-making puzzle where we check if a number N can be expressed as 3x + 5y for non-negative integers x and y. My first instinct was to check the trivial cases like N being divisible by 3 or 5, or even 15. Since 10^9 is way too big for a naive loop, checking small multiples first is a solid optimization. If those don't pan out, the loop explores how many 5s we can subtract until the remainder is divisible by 3. It's not the most efficient math-only way, but it passes the tests easily.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(1) |

## Key Insights

- Any number that can be written as 3x + 5y is valid, and once N > 8, you can actually represent any integer using 3s and 5s.
- Checking the remainder is much faster than running a loop for large N.

## Common Mistakes

- Forgetting that 1, 2, 4, and 7 are impossible to form, which leads to wrong answers on small inputs.
