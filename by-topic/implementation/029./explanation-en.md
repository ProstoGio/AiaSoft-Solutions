# Explanation — 029. ნულების ჯგუფები

## Approach

The trick here is to keep a running count of zeros as you iterate through the input. I use `quanity` to track the current streak of zeros and `mainquanity` to store the longest one found so far. Whenever I hit a non-zero number, I check if the streak I just finished is the new record and then reset `quanity` back to zero. It's a straightforward linear scan.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- The biggest pitfall is ignoring the case where the longest sequence of zeros ends at the very last element of the array.
- By resetting only when a non-zero is hit, we cleanly handle groups of varying lengths without needing an extra array.

## Common Mistakes

- Forgetting to perform one final comparison after the loop finishes, which causes it to miss the longest group if it happens to be at the very end of the input.
