# Explanation — 177. ჩატეხილი კიბე 1

## Approach

This is a classic Fibonacci-style DP problem with a twist. Normally, you'd just say that the number of ways to reach step N is the sum of ways to reach N-1 and N-2. Since there's a broken step, I just forced the number of ways to land on that specific step to zero. By treating the broken step as an impassable barrier, the recurrence relation handles everything naturally because any path trying to pass through that step simply gets multiplied by zero.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The recurrence d[i] = d[i-1] + d[i-2] holds perfectly everywhere except at the broken step.
- Setting d[x] = 0 effectively 'kills' all paths that try to use the broken stair.

## Common Mistakes

- Forgetting to handle the base cases for n=1 and n=2 when the broken step is right at the start.
