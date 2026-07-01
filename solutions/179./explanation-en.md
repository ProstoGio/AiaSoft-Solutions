# Explanation — 179. ცხრილი

## Approach

The trick here is realizing that a single rectangle covering all existing stars is essentially defined by the minimum and maximum row and column indices where a '*' appears. Instead of trying to detect complex patterns, just scan the whole grid once to find the 'bounding box'—the topmost, bottommost, leftmost, and rightmost stars. Once you have these four coordinates, every cell inside this range should be a star. I just fill in any dots I find in that zone and call it a day.

## Complexity

| | |
|-|--|
| Time | O(H * W) |
| Space | O(H * W) |

## Key Insights

- Any set of stars that forms a single rectangle is uniquely defined by its top-left and bottom-right corners.
- Finding the bounding box is a simple O(H*W) scan, which is efficient enough given the 50x50 constraint.

## Common Mistakes

- Trying to use BFS or DFS to find connected components, which is massive overkill for this problem.
