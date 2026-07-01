# Explanation — 865. კენტი რიცხვების ჯამი

## Approach

This one is as straightforward as it gets. I just initialized a sum variable, looped through the input once, and used the modulo operator to pick out the odd numbers on the fly. No need to store the whole array in memory since we can process each number as soon as we read it. It's just a simple filter-and-accumulate logic.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- You don't actually need the array 'a[n]'. You can just store the current number in a temp variable and keep the running total.
- The modulo operator '%' is the standard way to check for parity; if 'x % 2 != 0', the number is odd.

## Common Mistakes

- Forgetting to initialize the sum variable to zero, which leads to garbage values in the result.
- Trying to use a complex data structure when a single integer variable is all you need.
