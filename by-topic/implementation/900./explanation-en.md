# Explanation — 900. ორი მარტოხელა

## Approach

Since every number appears an even number of times except for two, sorting the array makes the pairs cluster together perfectly. Once sorted, a single unique element will be 'isolated' because its neighbors won't match it. I just scan through the sorted array, checking if the current element is different from both the one before and the one after it. This handles the boundaries at the start and end of the array as special cases, and it's plenty fast for a 10^5 constraint.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- Sorting brings identical elements right next to each other, so we don't need a hash map to keep track of counts.
- The logic for the boundaries (index 0 and n-1) is simple: just check one neighbor instead of two.

## Common Mistakes

- Forgetting to handle the edge cases where the unique number is at the very beginning or end of the array.
