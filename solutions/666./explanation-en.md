# Explanation — 666. ლურსმნები

## Approach

Sorting the nails by position is the essential first step to turn this into a standard DP problem. Once they are in order, each nail i must be connected to its neighbor, either i-1 or i-2, to minimize the total thread length. If we look at the state d[i], it represents the minimum cost to cover all nails up to i. We essentially decide whether to connect the current nail to the previous one or if the previous gap was already covered, allowing us to build the solution incrementally.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- The sorting is mandatory because the problem doesn't guarantee the nails are given in order of their position.
- The recurrence d[i] = min(d[i-1], d[i-2]) + dist(i, i-1) works because we always benefit from connecting an 'unpaired' nail to the closest available neighbor.

## Common Mistakes

- Forgetting to sort the input array, which makes the DP transitions meaningless.
- Trying to solve it greedily without considering the previous state's cost.

## Walkthrough

With sorted positions, d[1] is impossible (0), d[2] is just the gap between 1 and 2. For d[3], we must connect 1-2 and 2-3 or just connect 1-3. The DP naturally picks the path that keeps the thread length minimal as we move right.
