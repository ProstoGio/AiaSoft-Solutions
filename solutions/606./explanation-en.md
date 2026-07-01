# Explanation — 606. დათვალე ერთები

## Approach

This one is pretty straightforward. You need to count set bits for each input number, and since we're using C++, the compiler's built-in function `__builtin_popcount` is the cleanest way to handle it. I store the results in an array as I go, then just print them out. It’s way faster than writing a custom loop to shift bits manually.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The `__builtin_popcount` function is a GCC extension that compiles down to a single CPU instruction on most architectures.
- Storing results in an array is fine here since N is only up to 1000, though you could just print them immediately to save memory.

## Common Mistakes

- Trying to implement the bit-counting manually with a while loop, which is error-prone and much slower.
