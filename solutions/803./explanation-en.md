# Explanation — 803. კრუიზი ავტობუსებით

## Approach

This one is basically just ceiling division in disguise. Since we can't leave kids behind, if the number of students isn't perfectly divisible by the bus capacity, we definitely need an extra bus. Once we have the total number of buses, the exact same logic applies to the boats, where we calculate how many trips are needed based on the boat's capacity for buses. Keeping it to simple integer math is the cleanest way to handle this without messing around with floating-point types.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Use (n + m - 1) / m for ceiling division if you want a one-liner, though the if-else block is just as clear.
- The order of operations is fixed; you must solve for the number of buses before you can determine the number of boats.

## Common Mistakes

- Forgetting to check the remainder and just using n/m, which leads to leaving students stranded.
