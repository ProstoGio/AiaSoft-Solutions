# Explanation — 617. მართკუთხედების თანაკვეთა - 1

## Approach

The trick here is to realize that the intersection of two axis-aligned rectangles is just another rectangle (or nothing at all). Instead of trying to find coordinates by checking all cases, you just need to find the overlapping boundaries. The left boundary of the intersection is the max of the two left x-coordinates, and the right boundary is the min of the two right ones. Same logic applies for top and bottom y-coordinates. If the calculated width or height turns out to be negative, it just means they don't overlap, so the area is zero.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The width of the intersection is max(0, min(x2, x4) - max(x1, x3)).
- If the calculated width or height is non-positive, the rectangles don't overlap.

## Common Mistakes

- Forgetting to handle the case where the rectangles don't intersect at all, resulting in a negative area.
