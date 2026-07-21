# Explanation — 572. სათამაშოები

## Approach

Since the board is 2xN and each toy is 1x2, you can fit exactly one toy in every column if placed vertically, or two toys taking up two columns if placed horizontally. Either way, the total area covered by each toy is 2 square units, and the total area of the board is 2 * N. Therefore, you can always perfectly tile the 2xN grid without any gaps, meaning you can place exactly N toys.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The total area is 2N and each tile is 2, so the maximum number of tiles is 2N / 2 = N.
- The constraint N up to 10^18 means we must use long long.

## Common Mistakes

- Using int instead of long long, which will overflow for large N.
- Overcomplicating the logic with DP or recursion.

## Walkthrough

The solution is trivial because the math simplifies directly to N. I just read the input as a 64-bit integer and print it back out.
