# Explanation — 118. ჯვარი

## Approach

The core of the problem is calculating how far a 'cross' extends in four directions from a given center point (R, S). Since we can flip at most one zero to a one, I check each of the four arms. If I find a zero, I have the option to include it as part of the cross, provided the center itself is already a one or if I'm using my single 'flip' on the center itself. The logic splits into checking if the center is already a one versus if it's a zero, and then carefully summing up the valid continuous segments of ones.

## Complexity

| | |
|-|--|
| Time | O(T * (M + N)) |
| Space | O(M * N) |

## Key Insights

- You can treat the 'flip' as a state: either use it to convert the center if it's a zero, or use it to bridge a gap in one of the four arms.
- A valid cross requires at least one '1' on either side of the center for both the vertical and horizontal axes; the flip doesn't bypass this core requirement.

## Common Mistakes

- Forgetting to check the boundary conditions where the center is on the very edge of the matrix.
- Accidentally using the flip on both the center AND an arm, which violates the 'at most one' rule.

## Walkthrough

For each query, I expand outwards from (x, y) until I hit a zero or the boundary. If the center is '0', I count all ones in the four directions and add 1 (for the center itself). If the center is '1', I look for the first '0' in each direction, potentially 'repairing' it if I haven't used my flip yet.
