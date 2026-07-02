# Explanation — 257. რიცხვის ძიება მასივში - 2

## Approach

Since the first array is already sorted, linear search would be way too slow given the constraints. Binary search is the classic move here. For every number in the second array, I just narrow down the search space in the first one by half in each step. It’s clean, efficient, and fits the problem constraints perfectly without needing any complex data structures.

## Complexity

| | |
|-|--|
| Time | O(M log N) |
| Space | O(N) |

## Key Insights

- The sorted condition on the first array is a massive hint that we should skip simple iterations.
- Binary search turns a potentially million-step search into roughly 20 comparisons per element.

## Common Mistakes

- Using a linear scan (O(N*M)) which will definitely hit a Time Limit Exceeded error since N is up to 10^6.

## Walkthrough

If we look for a target 'x' in 'a', we set left=0 and right=n-1. We check the middle element; if it's smaller than 'x', we ignore the left half. If it's larger, we ignore the right half. Rinse and repeat until we either find 'x' or our bounds cross each other.
