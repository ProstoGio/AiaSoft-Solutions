# Explanation — 188. ჩქარა, ბაბი, ჩქარა!

## Approach

This is essentially a variation of the classic climbing stairs problem. Usually, you can move 1 or 2 steps, but the magic step at index m changes the rules by letting you skip up to 3 steps once you land there. I maintained two DP arrays: one for the normal state and one for the 'speedy' state once we've hit that magic step. Every step just builds on the sum of previous possibilities, adding that extra range once we pass the magic threshold.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Treat the magic step as a state transition point where the jump range expands.
- You don't need a complex state machine; two arrays tracking cumulative ways to reach a step work perfectly.

## Common Mistakes

- Miscounting the index of the magic step, especially since the problem might use 1-based indexing while C++ vectors are 0-indexed.

## Walkthrough

If n=5 and m=3, the logic accumulates standard Fibonacci-like growth for the first 3 steps. Once you reach m=3, the jump capacity increases, so for steps 4 and 5, you start adding the 'b' array results which include the +3 jump, significantly boosting the total count.
