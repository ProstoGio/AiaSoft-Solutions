# Explanation — 691. უცნაური დალაგება

## Approach

The trick here is to realize that the problem is just asking us to alternate between the smallest and largest remaining numbers. Once I sorted the array, I kept two pointers: one at the start of the array and one at the end. In every iteration, I just pick the current leftmost element, then the rightmost, and move both pointers inward until they cross. It's a classic two-pointer pattern that makes the logic much cleaner than trying to rearrange things in-place.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- Sorting is the heavy lifting here; once the data is ordered, you don't actually need to reorder the array, just print elements strategically.
- Using two pointers lets you access the min and max extremes of the remaining pool without needing extra storage or complex swaps.

## Common Mistakes

- Forgetting to handle the middle element when N is odd, which leads to printing the same index twice or missing it entirely.
