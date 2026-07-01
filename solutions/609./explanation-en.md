# Explanation — 609. i-ური ბიტი

## Approach

This one is basically the 'Hello World' of bitwise operations. Instead of converting the number to a string or doing weird math, you just shift the bits. By moving the bit you care about to the 0th position and checking if it's a 1, you get your answer instantly. It’s clean, it’s fast, and it avoids any potential overflows since we're using 64-bit integers.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The bitwise right shift (>>) operator drops the bits to the right of your target, leaving it at the very end.
- Using the bitwise AND (&) with 1 is the standard way to isolate that last bit.

## Common Mistakes

- Using int instead of long long, which will fail for inputs near 10^18.
