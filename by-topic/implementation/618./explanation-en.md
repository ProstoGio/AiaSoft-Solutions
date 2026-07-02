# Explanation — 618. მართკუთხედების თანაკვეთა - 2

## Approach

The trick here is realizing that the intersection of multiple axis-aligned rectangles is just another rectangle. If you think about it, the left boundary is the maximum of all x1 coordinates, the bottom is the maximum of all y1 coordinates, and the right and top boundaries are simply the minimums of the corresponding x2 and y2 coordinates. You don't need fancy data structures or sweep-line algorithms. Just keep updating a 'running' intersection rectangle by comparing it with each new rectangle in the input. If at any point the left coordinate passes the right one (or bottom passes top), the intersection becomes empty, and the area stays zero.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The intersection of any number of axis-aligned rectangles is defined by max(lefts), max(bottoms), min(rights), and min(tops).
- If the calculated width or height is less than or equal to zero, there is no overlap, so the area is effectively zero.

## Common Mistakes

- Forgetting to handle the case where rectangles don't overlap at all, leading to negative width or height values.
