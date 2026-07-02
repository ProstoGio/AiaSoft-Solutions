# Explanation — 692. ორადი მეზობლები

## Approach

The goal is finding powers of two that bound our number x strictly. I started with a loop to find the smallest power of two greater than x. Once I have that, getting the smaller neighbor is just a matter of checking if the current power is already equal to x or if I need to shift back one step. It's a bit of brute force, but since the input goes up to 2*10^9, a simple while-loop fits well within the time limit.

## Complexity

| | |
|-|--|
| Time | O(n log x) |
| Space | O(1) |

## Key Insights

- Powers of two are dense enough that a simple loop to multiply by two until we cross x is plenty fast.
- Always handle the edge case where x is exactly a power of two so you don't return x itself as a 'strict' neighbor.

## Common Mistakes

- Forgetting to use 'long long' for the powers, which will overflow a 32-bit integer when x is near 2*10^9.
