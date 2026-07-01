# Explanation — 558. ზრდადი მიმდევრობა

## Approach

This one is pretty straightforward if you look at it greedily. You just walk through the array from left to right, comparing each element with the one immediately before it. If the current number is smaller than the previous one, you have to bump it up until it matches the previous value to satisfy the non-decreasing condition. You keep a running total of these bumps, and since you always update the current element to be equal to the previous one, you're effectively setting a new floor for the next comparisons.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The greedy choice works here because making an element exactly equal to the previous one is the cheapest way to 'fix' it without forcing unnecessary increases on later elements.
- Updating the current value in-place is the easiest way to keep track of the modified sequence for future comparisons.

## Common Mistakes

- Forgetting to use 'long long' for the counter or the array elements, which will definitely overflow given the 10^9 limit.
