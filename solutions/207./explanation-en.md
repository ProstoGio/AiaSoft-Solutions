# Explanation — 207. ლებრონი და კალათბურთი

## Approach

This one is basically just basic arithmetic. Since basketball scores are weighted by the type of shot, I just calculate the total points for each team using a simple weighted sum. A point is worth one, a two-pointer is worth two, and a three-pointer gets you three. Comparing the two totals gives the winner instantly. It's a straightforward implementation task.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Total points are calculated as (1*a + 2*b + 3*c).
- Using a simple if-else branch handles the comparison logic.

## Common Mistakes

- Forgetting to multiply the basketball shots by their respective point values.
