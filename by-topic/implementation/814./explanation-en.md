# Explanation — 814. ლამაზი წევრები

## Approach

The core of the problem is checking the 'beauty' condition for every element that has neighbors, which means everything except the first and last indices. Since a 'beautiful' number must be even and equal to the average of its neighbors, I just iterate from index 1 to n-2 and perform the check. Using the formula (a[i-1] + a[i+1]) / 2 == a[i] works perfectly here. If the count remains zero, I just output -1 to satisfy the requirement.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The condition (a[i-1] + a[i+1]) % 2 == 0 is technically redundant if you trust integer division, but it's safer to include to ensure the neighbors actually sum to an even number before dividing.
- The loop bounds are crucial; starting at index 1 and ending at n-2 prevents out-of-bounds access errors.

## Common Mistakes

- Forgetting that the first and last elements can't be 'beautiful' because they lack two neighbors.
- Using floating-point division instead of integer arithmetic, which could lead to precision issues.
