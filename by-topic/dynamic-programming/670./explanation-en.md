# Explanation — 670. ბანკომატი

## Approach

This is a classic variation of the coin change problem where we need the minimum number of coins to reach a target sum N. I used a DP array where each index i stores the minimum coins needed to make sum i. If a sum can't be reached, I just leave it as -1. By iterating from 1 to N, I calculate the optimal state for each sub-amount by looking back at previous states and adding one more coin.

## Complexity

| | |
|-|--|
| Time | O(n * k) |
| Space | O(n) |

## Key Insights

- Instead of initializing with infinity, using -1 as a flag for 'unreachable' makes it easy to skip invalid states during the transition.
- The state transition d[i] = min(d[i], d[i - coin] + 1) is only triggered if the previous state d[i - coin] was actually reachable.

## Common Mistakes

- Forgetting to handle the unreachable case results in massive values or incorrect math when adding 1 to -1.
- Not checking if a coin is smaller than or equal to the current sub-sum i before attempting to access the array.

## Walkthrough

If we need 7 and have coins {2, 5}, d[2] becomes 1 and d[5] becomes 1. For d[7], the code checks d[7-2]=d[5] and d[7-5]=d[2]. Both are 1, so d[7] becomes 1+1=2. Simple enough.
