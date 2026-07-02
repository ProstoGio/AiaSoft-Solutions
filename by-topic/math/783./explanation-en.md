# Explanation — 783. პირველობა რეიტინგში

## Approach

This one is as straightforward as it gets. You just need to calculate the total number of problems each person solves after D days and see who ends up with a higher count. Since we know exactly how many problems they solve daily, we just add the product of their daily rate and the number of days to their starting total. No loops, no complicated data structures, just basic arithmetic.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Don't overcomplicate it with a loop; just multiply the rate by the days and be done with it.
- Remember that the total is the initial amount plus the product of the rate and time.

## Common Mistakes

- Forgetting to add the initial N or M count to the new problems solved.
