# Explanation — 347. ბაბი კინოთეატრში

## Approach

This is basically just mapping B people into a grid of M columns. If you think about it, the row number is just the integer division of B by M, but there's a catch when B is a perfect multiple of M. If B divides evenly, the bunny sits at the end of the current row; otherwise, it spills over into the next row. The column number is handled by the modulo operator, with a quick check to make sure we don't return 0 for the last seat in a row.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division gets you the row count, but you have to watch out for the remainder.
- Using the modulo operator gives you the seat index, just remember that a remainder of 0 means the last seat in the row.

## Common Mistakes

- Forgetting to handle the edge case where B is exactly divisible by M, which results in the row number being one too high if you aren't careful.
