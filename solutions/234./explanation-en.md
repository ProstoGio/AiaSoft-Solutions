# Explanation — 234. მოზაიკა

## Approach

Since N is small, topping out at 50, a brute-force approach is perfectly fine here. The strategy is to iterate through every possible adjacent pair in the grid, swap them, calculate the longest run of identical colors in the affected row and column, and then swap them back. You have to check both horizontal and vertical lines for each swap. Keeping track of the absolute maximum found during any of these operations gives the answer.

## Complexity

| | |
|-|--|
| Time | O(n³) |
| Space | O(n²) |

## Key Insights

- The board size N=50 is the main hint; O(n³) is about 125,000 operations, which is nothing for a modern CPU.
- You don't need to check the entire grid after every swap, just the row and column where the swap occurred.

## Common Mistakes

- Forgetting to swap the stones back to their original position after calculating the potential streak.
- Overlooking the fact that a swap might change a vertical sequence and a horizontal one simultaneously.

## Walkthrough

If you have a row 'C P C C', swapping the first 'C' and 'P' results in 'P C C C'. You recalculate the counts for that row (finding 3) and the columns where those two stones were located, update the global max, then restore the original grid state before checking the next pair.
