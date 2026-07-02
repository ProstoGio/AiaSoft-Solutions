# Explanation — 873. E = mc²

## Approach

The formula is E = mc². Given that c is 300,000, calculating c² gives us 90,000,000,000. Since the input mass can be up to 10¹⁸, multiplying it by 90 billion would easily overflow a standard 64-bit integer. Instead of risking an overflow, I treated the multiplication as a string operation: I multiplied the mass by 9 and then simply appended ten zeros to the end.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Multiplying 300,000 squared results in 9 followed by 10 zeros.
- Appending zeros to a string is a safe way to bypass 64-bit integer limits when you know the math involved is just a power of ten.

## Common Mistakes

- Trying to use 'unsigned long long' for the final result, which will overflow since 10¹⁸ * 9 * 10¹⁰ exceeds the 2⁶⁴ limit.
