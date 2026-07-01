# Explanation — 403. ბატები და ბატკნები

## Approach

This is a classic system of linear equations disguised as a farmyard puzzle. You have two variables: geese (x) with 2 legs and lambs (y) with 4 legs. Since you know the total heads (H) and total legs (F), you can write x + y = H and 2x + 4y = F. Solving for y gives you (F - 2H) / 2. Once you find y, x is just H minus y. The main thing is to verify that these numbers actually make sense—no negative animals and the leg count needs to match perfectly.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Every head represents one animal, which simplifies the math significantly.
- The check (2*x + 4*y != F) is crucial because not every H and F combination results in a valid integer solution.

## Common Mistakes

- Forgetting to check for negative values, which leads to incorrect answers when the input implies impossible configurations.
