# Explanation — 327. კენტი რიცხვები

## Approach

This one is as straightforward as it gets. Since we need to list odd numbers up to N, the most intuitive way is just starting from 1 and hopping by two in each step. I used a while loop that keeps adding 2 until we hit or exceed the limit. It’s clean, efficient, and avoids any weird conditional checks inside the loop.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- Incrementing by two instead of using an if-statement inside the loop saves you from unnecessary modulo operations.
- The loop condition i <= n perfectly handles cases where N itself is odd, as it includes the number in the final output.

## Common Mistakes

- Starting the loop at 0 or miscalculating the stopping condition which leads to an off-by-one error.
