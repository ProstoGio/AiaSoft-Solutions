# Explanation — 299. კიბე და ბურთულა

## Approach

This is a classic variation of the Fibonacci sequence, but with a slight twist. Since you can reach any step from the previous three, the number of ways to arrive at step 'i' is just the sum of the ways you could have arrived at the three steps beneath it. I used a simple DP array to store these values, building them up from the base cases. It's essentially just saying: to get here, you either jumped 1, 2, or 3 steps.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The recurrence relation is d[i] = d[i-1] + d[i-2] + d[i-3].
- Always set your base cases (1, 2, and 3) manually before starting the loop to avoid out-of-bounds errors.

## Common Mistakes

- Forgetting to handle small N values, which leads to accessing index 0 or negative indices when starting the loop.
