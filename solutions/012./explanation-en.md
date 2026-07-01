# Explanation — 012. მართკუთხედი

## Approach

To solve this, I just had to remember the formula for a rectangle's perimeter, which is P = 2 * (a + b). Since both sides must be integers, P has to be an even number because 2 times any integer is even. Also, a rectangle needs sides of at least length 1, so the smallest perimeter is 2 * (1 + 1) = 4. That means I just need to check if P is even and strictly greater than 2.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The perimeter formula 2*(a+b) forces P to be even for any integer side lengths.
- A degenerate rectangle with sides of 1 and 0 isn't valid, so P must be greater than 2.

## Common Mistakes

- Forgetting that a perimeter of 2 is impossible for a rectangle with positive integer sides.
