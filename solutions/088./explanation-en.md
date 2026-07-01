# Explanation — 088. გადაჭერი ლენტი

## Approach

This one is as straightforward as it gets. If you want to split a ribbon of length N into two equal integer parts, the math basically demands that N be even. If N is odd, you'll end up with halves like 2.5, which violates the 'integer length' constraint. Checking if N modulo 2 equals zero is the fastest way to confirm if a fair split is possible.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Any even number N can be split into N/2 and N/2, both of which are integers.
- Odd numbers always result in a remainder when divided by two, making an equal integer split impossible.

## Common Mistakes

- Trying to use a loop or some complex logic when a simple parity check is enough.
