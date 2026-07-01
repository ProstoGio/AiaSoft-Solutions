# Explanation — 502. პიცა

## Approach

The problem asks for a number of slices that can be divided equally among either N or M guests, plus Tako herself. Since Tako is always there, we are really looking for the Least Common Multiple (LCM) of (N+1) and (M+1). The logic is simple: we need a total count that is divisible by both potential crowd sizes to ensure everyone gets an equal share regardless of who shows up.

## Complexity

| | |
|-|--|
| Time | O(log(min(n, m))) |
| Space | O(1) |

## Key Insights

- Don't forget to include Tako in the headcount; that +1 is the most common place to fail.
- The LCM is the smallest number that both (N+1) and (M+1) divide into perfectly.

## Common Mistakes

- Forgetting that the host is also a person eating pizza.
- Trying to find a greedy approach instead of recognizing it's just a classic LCM problem.
