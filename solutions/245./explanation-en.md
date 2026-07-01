# Explanation — 245. ძაღლების თავშესაფარი

## Approach

The core of this problem is figuring out exactly when the food runs out. Since every dog eats k kilograms per week, the total weekly consumption is n * k. You just need to see how many times that total fits into your total supply m. Dividing m by (n * k) gives you the number of full weeks you can get through, and adding one tells you the first week where you actually fall short and need a refill.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division in C++ automatically handles the floor operation, which simplifies counting full weeks.
- The refill happens on the first week where the remaining food is insufficient, which is always exactly one week after the last 'full' one.

## Common Mistakes

- Forgetting to add 1 to the result, which would point to the last week you have enough rather than the week you need a refill.
