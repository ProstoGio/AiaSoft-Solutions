# Explanation — 470. 0-ები და 1-ები

## Approach

This is pretty much as straightforward as it gets. You just read the input as a string and walk through every character one by one. I keep a counter variable, increment it whenever I spot a '1', and ignore the zeros entirely. It's the standard O(n) scan, nothing fancy, just clean and simple.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- No need to convert the input to an integer; treating it as a string is much easier since we just want to count specific characters.
- The input size isn't specified, but a linear scan will handle even massive strings comfortably within the time limit.

## Common Mistakes

- Trying to store the whole thing as a single long integer and using modulo/division, which will fail if the input string is longer than 64 bits.
