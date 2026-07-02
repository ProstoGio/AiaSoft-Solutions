# Explanation — 253. დიპლომები

## Approach

At first, you might try to guess how to fit the diplomas, but calculating the exact layout isn't the point. Since the number of diplomas that fit in a square of side X increases monotonically as X gets bigger, this is a classic binary search setup. We define our search range between 1 and the worst-case scenario where we place all diplomas in a single line. For any chosen side length 'mid', we simply check how many fit by dividing the side by the width and height. If the result is at least N, we shrink our search space to try and find a tighter fit.

## Complexity

| | |
|-|--|
| Time | O(log(max(w, h) * n)) |
| Space | O(1) |

## Key Insights

- The capacity of a square with side 'm' is (m/w) * (m/h). Just integer division handles the orientation logic.
- The upper bound for binary search is simply max(w, h) * n, which covers even the most inefficient arrangement.

## Common Mistakes

- Using an upper bound that's too small, potentially causing an overflow or an incorrect answer if N is large.
- Trying to figure out the rotation logic instead of realizing that (m/w)*(m/h) covers all valid non-rotated placements.

## Walkthrough

For N=10, w=2, h=3: We binary search for a side length 'm'. If m=6, (6/2)*(6/3) = 3*2 = 6 diplomas fit. If m=7, (7/2)*(7/3) = 3*2 = 6 still fit. If m=8, (8/2)*(8/3) = 4*2 = 8. We keep pushing the boundaries until we hit the smallest 'm' where count >= 10.
