# Explanation — 416. გივიკო, ნინიკო და კანფეტები

## Approach

This one is basically just working backward from the final state. Since we know the final counts for Giviko and Niniko, we just reverse the two exchange operations. I started by doubling Niniko's total to undo her half-share donation to Giviko, then adjusted Giviko's count accordingly, and repeated the process for the first exchange. If any step results in a negative number or a fraction, it means the starting state wasn't valid.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Work backwards: the final state is the result of two linear transformations, so undoing them is just simple arithmetic.
- Validation checks are key here because not every 'a' and 'b' pair is mathematically possible if they represent whole candies.

## Common Mistakes

- Forgetting to check if the intermediate values become negative or fractional during the reverse process.
