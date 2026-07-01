# Explanation — 616. ბიტებით თამაში

## Approach

This is a classic bit manipulation problem where you just need to map the three types of operations to their corresponding C++ bitwise operators. For setting a bit, I use OR with a shifted mask, while clearing involves an AND with the inverse of that mask. Toggling is the cleanest one—XOR does the job perfectly because flipping a bit is exactly what it's designed for. The constraints are small enough that a simple loop with constant-time operations works effortlessly.

## Complexity

| | |
|-|--|
| Time | O(Q) |
| Space | O(1) |

## Key Insights

- 1LL << k is your best friend here, but remember the 'LL' suffix; otherwise, shifting a 32-bit integer by 31 positions might cause overflow issues.
- The NOT operator (~) flips every single bit, so using (x & ~(1LL << k)) effectively isolates the target bit as 0 while keeping the rest untouched.

## Common Mistakes

- Forgetting to use 1LL instead of 1 when shifting, which leads to UB or wrong results for k >= 31.
