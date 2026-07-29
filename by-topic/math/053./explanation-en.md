# Explanation — 053. მართკუთხედი

## Approach

A rectangle's perimeter is calculated as 2 * (a + b), where a and b are the side lengths. This means the perimeter P must be an even number because 2 * anything is even. Also, the smallest rectangle with integer sides is a 1x1 square, which has a perimeter of 4. Therefore, any odd number or any number less than 4 cannot form such a rectangle.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- P must be even because 2 * (a + b) is always even
- P must be at least 4 since the smallest side is 1

## Common Mistakes

- Forgetting to check if P is odd
- Overlooking the P < 4 constraint

## Walkthrough

The code simply takes P and checks two conditions: if P is less than 4 OR if P is not divisible by 2. If either is true, it outputs 0. Otherwise, it prints 1.
