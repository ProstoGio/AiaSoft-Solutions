# Explanation — 468. ირაკლის კვადრატი

## Approach

This one is basically a classic 'don't overthink it' problem. Since you have a rectangle of size N by M, the largest square you can cut out is restricted by the shorter side of the rectangle. If you try to make the square's side any larger than the smallest dimension, it simply won't fit on the paper. So, you just find the minimum of N and M and square it.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The side length of the largest possible square is always limited by min(N, M).
- Calculating the area is just a matter of squaring that side length.

## Common Mistakes

- Trying to use complex loops or conditional logic where a simple min() function suffices.
