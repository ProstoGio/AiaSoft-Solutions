# Explanation — 202. უცნაური კიბე

## Approach

This is a classic DP problem where you have to decide at each step whether to come from the immediate previous stair or skip one. Since you're allowed to skip one step whenever you want, the minimum cost to reach step 'i' is simply the value of the current step added to the minimum of the costs to reach the two preceding steps. I initialized the first two steps manually because they don't have enough history to look back two spots. From there, it's just a linear scan to fill up the DP table.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The recurrence relation is d[i] = min(d[i-1], d[i-2]) + a[i], which is basically the same logic as the Fibonacci sequence but with a minimization step.
- Since you can always skip a step, you don't need to overcomplicate the state; just knowing the best cost to reach the previous two positions is enough.

## Common Mistakes

- Forgetting to handle the edge case for the first two steps separately can lead to an out-of-bounds error.

## Walkthrough

If you have [10, 20, 30, 40], d[0] is 10, d[1] is 20. Then d[2] becomes min(10, 20) + 30 = 40. Finally, d[3] is min(20, 40) + 40 = 60.
