# Explanation — 907. ფიფქების კვადრატი

## Approach

The goal is just to draw a hollow square of asterisks. I went with a 2D array approach because it’s super intuitive to map out the grid first and fill in the perimeter. I initialized everything with zeros, then specifically targeted the top row, bottom row, first column, and last column to override them with asterisks. Finally, printing it out was easy—I just swapped the placeholders for empty spaces.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- The perimeter of the square is defined by row indices 0 and n-1, and column indices 0 and n-1.
- Using a 2D string array is a bit memory-heavy for N=30, but it keeps the logic clean and readable.

## Common Mistakes

- Forgetting the corners when iterating through rows or columns.
