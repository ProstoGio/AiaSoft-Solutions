# Explanation — 693. ასაკი თვეებში

## Approach

The core logic is to translate the birth year and month into the total number of months elapsed up to March 1st, 2022. I calculate how many months are left in the birth year, multiply the full years in between by twelve, and then add the two months from 2022 (January and February). Since the birth is on the 1st, I don't need to worry about day offsets. It's basically a simple arithmetic problem that turns dates into a flat month count.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Convert everything to total months relative to the start of the year.
- The year gap needs to be multiplied by 12.
- The partial year at the end is just January and February, so adding 2 is correct.

## Common Mistakes

- Off-by-one errors in the year calculation.
- Forgetting to include the birth month itself in the count for the starting year.

## Walkthrough

I read x (year) and y (month). The first part (12 - y + 1) finds how many months passed in the birth year including the birth month. Then, (2022 - x - 1) * 12 accounts for all the full years between birth and 2022. Finally, adding 2 covers January and February of 2022.
