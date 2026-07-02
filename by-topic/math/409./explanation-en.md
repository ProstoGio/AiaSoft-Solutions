# Explanation — 409. გუგლიკო და შერჩევა

## Approach

When you write out the process for a few small N, you quickly notice a pattern: the survivor is always the largest power of 2 that is less than or equal to N. Basically, every time we remove the odd numbers, we are essentially performing a bitwise shift or trimming the binary representation. You don't need to simulate the whole queue because the last person standing is just the highest bit currently 'turned on' in the number N.

## Complexity

| | |
|-|--|
| Time | O(log n) |
| Space | O(1) |

## Key Insights

- The problem is a variation of the Josephus problem, specifically looking for the highest power of 2.
- Since N can be up to 10^18, we can't simulate the elimination; finding the bit length is much faster.

## Common Mistakes

- Trying to use a vector or a queue to simulate the removals, which will TLE given N=10^18.
