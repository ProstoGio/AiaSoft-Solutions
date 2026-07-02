# Explanation — 098. მაქსიმალური სხვაობა

## Approach

The problem asks for the maximum gap between adjacent numbers when they are ordered by value. If you sort the array first, finding the 'smallest number greater than the current one' becomes trivial because it's just the immediate neighbor. Once the array is sorted, you just iterate once through the list and check the difference between each pair of adjacent elements. The biggest difference you find during this pass is your answer.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- Sorting is the main engine here; it lines up the candidates so you don't have to search for the next smallest value manually.
- You don't need to worry about duplicate values; if a[i+1] == a[i], the difference is zero, which won't affect the maximum anyway.

## Common Mistakes

- Forgetting to handle duplicates or thinking you need a nested loop to find the 'next smallest', which would be O(n²).
