# Explanation — 089. მორები

## Approach

This problem is all about logic rather than complex math. Every time you cut a log once, you gain exactly one additional piece. If you start with k logs and cut them m times in total, you will end up with k + m pieces. Rearranging this gives k = n - m.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Each cut increases the total count of logs by exactly one.
- The starting number of logs must be positive if any cuts occurred, or zero if no cuts occurred and no logs remain.

## Common Mistakes

- Forgetting to check the edge case where the math results in a negative number.
- Overlooking the constraint where m > 0 but n - m ends up being 0.

## Walkthrough

I just take the total number of final logs n and subtract the number of cuts m. If the result is negative, it's physically impossible to have those logs, so I print 'Impossible'. I also handle the weird edge case where the math might suggest zero logs despite cuts happening, which isn't possible.
