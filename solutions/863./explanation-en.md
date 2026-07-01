# Explanation — 863. დაითვალე კენტები

## Approach

This one is as straightforward as it gets. You don't actually need to store the numbers in an array since you only care about the count of odd numbers. I just keep a running total in a variable called 'cnt' and check the remainder of each number as I read it from the input. Every time I hit an odd number, I just increment the counter.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- You don't need an array to solve this; processing input on-the-fly saves memory.
- The modulo operator (%) is the standard way to check for parity.

## Common Mistakes

- Trying to use arrays for everything when a simple variable would suffice.
