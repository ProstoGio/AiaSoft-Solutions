# Explanation — 891. დაითვალე ლიდერები

## Approach

If you check from left to right, you end up doing a bunch of redundant work. Instead, just walk backwards from the end of the array. The last element is always a leader, so keep track of the maximum value seen so far. Every time you hit a number greater than or equal to that running maximum, you've found a new leader.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The leader property is defined by everything to the right, which makes the right-to-left scan the natural way to solve this.
- Keeping track of just the current maximum is enough to decide if any element qualifies as a leader.

## Common Mistakes

- Trying to use nested loops to check every element against every element to its right, which results in O(n²) and hits the time limit.
