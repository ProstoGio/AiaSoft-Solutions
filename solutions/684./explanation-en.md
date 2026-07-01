# Explanation — 684. კიტრი და პომიდორი

## Approach

This one is pretty straightforward. You just calculate the total cost in tetri by multiplying prices by weights. The trick is the rounding rule: since we only have 5-tetri coins, if the total isn't divisible by 5, we bump it up to the next multiple. After that, simple integer division by 100 gives the Lari amount, and the remainder operator gets the remaining tetri.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The 'next multiple of 5' logic works perfectly with integer division: (k/5 + 1) * 5 pushes any non-multiple to the next level.
- Lari conversion is just standard base-100 logic once the rounding is handled.

## Common Mistakes

- Trying to use floating-point numbers instead of staying in integer arithmetic, which leads to precision bugs.
- Forgetting to check if the total is already a multiple of 5 before rounding up.
