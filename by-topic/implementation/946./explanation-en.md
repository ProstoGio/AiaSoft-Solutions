# Explanation — 946. ოთო და ციფრები

## Approach

The problem asks us to find the min and max number of 1s we can get by flipping bits between two 1s. Since any '0' sitting between two '1's can be toggled to a '1', and any '1' between two '1's can be flipped back to a '0', the greedy strategy works perfectly here. To maximize, I just iterate through and flip every '0' that has '1's on its neighbors. To minimize, I do the same thing but change those middle '1's into '0's instead.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- The condition Si-1=1 and Si+1=1 is the only trigger for an operation.
- Operations don't affect neighboring cells' ability to be flipped in the future since the neighbors are already '1's.
- The order doesn't matter, just apply the rule greedily.

## Common Mistakes

- Trying to use recursion or DP when it's just a simple linear pass.
- Forgetting to check the bounds of the loop (1 to N-2).

## Walkthrough

I create two copies of the string. In the first pass, I look for '101' patterns and turn them into '111' to get the maximum. In the second pass, I look for '111' patterns and turn them into '101' to get the minimum. Finally, I just count the 1s in both resulting strings.
