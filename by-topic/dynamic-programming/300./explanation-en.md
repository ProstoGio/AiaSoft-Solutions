# Explanation — 300. ფასიანი კიბე

## Approach

This is a classic DP problem where you decide the cheapest path to each step based on the previous two. Since you can jump either one or two steps, the cost to land on step `i` is just the cost of that specific step plus whichever path—the one from `i-1` or `i-2`—is cheaper. I initialized the first two steps as base cases, then ran a simple loop to build up the rest of the array. It's essentially just keeping track of the running minimum as you climb.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- You only ever look back at the two previous steps to make a decision, which is what makes this a DP problem.
- The value at `dp[i]` acts as the minimum cost to reach and step on that specific stair.

## Common Mistakes

- Trying to look back further than two steps or miscalculating the base cases.
