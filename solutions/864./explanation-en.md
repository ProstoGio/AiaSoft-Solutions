# Explanation — 864. დაითვალე ლუწები

## Approach

This is a classic warm-up task. You don't need to store all the numbers in an array since the parity of each integer can be checked on the fly as it's read from the input stream. Keeping a simple counter variable that increments whenever a number is divisible by two is the most direct way to solve it. It's clean, efficient, and avoids wasting memory.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- You don't need an actual array to store the inputs; processing them one by one as they arrive saves memory.
- The modulo operator (%) is all you need to check if a number is even.

## Common Mistakes

- Overthinking the memory allocation by creating a large array when it's totally unnecessary.
