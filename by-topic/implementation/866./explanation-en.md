# Explanation — 866. ლუწი რიცხვების ჯამი

## Approach

This one is as straightforward as it gets. You don't actually need to store the whole array since you only care about the running total of even numbers. I just read each integer one by one, check if it's divisible by two using the modulo operator, and add it to my sum variable if it is.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- You can save memory by processing the input on the fly instead of filling an array first.
- The modulo operator (%) is the fastest way to check for parity.

## Common Mistakes

- Forgetting to initialize the counter variable 'cnt' to zero, which leads to garbage values.
