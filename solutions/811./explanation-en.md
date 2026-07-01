# Explanation — 811. მასივის ორმოების რაოდენობა

## Approach

This one is pretty straightforward. Since an element needs neighbors on both sides to be considered a 'pit', we can ignore the first and last indices entirely because they don't have left or right neighbors respectively. I just loop from the second element up to the second-to-last one, checking the condition for each. Keeping a simple counter variable is enough to track the matches, then I just handle the edge case where the count remains zero.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The loop bounds are crucial; starting at index 1 and ending at n-2 automatically handles the boundary condition where the ends of the array can't be pits.
- The '-1' output requirement is an edge case that needs a quick if-check after the loop finishes.

## Common Mistakes

- Trying to access arr[i-1] or arr[i+1] outside of valid bounds, which would lead to a runtime error or garbage data.
