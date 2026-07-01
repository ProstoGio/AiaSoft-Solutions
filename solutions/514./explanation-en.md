# Explanation — 514. მიიღე მესამე

## Approach

This one is pretty straightforward. You just need to check the five basic arithmetic operations—plus, minus, multiply, integer division, and modulus—to see if any of them turn 'a' and 'b' into 'c'. Since the order is fixed and the numbers are small, there's no need for anything fancy. I just used a bunch of if-statements to check each case one by one, exiting as soon as I hit a match.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Always watch out for division by zero; the problem says integers are non-negative, but b can be 0.
- The order of operations is fixed, so you don't need to try rearranging them.

## Common Mistakes

- Forgetting to check if b is zero before performing division or modulo operations, which leads to a runtime error.
