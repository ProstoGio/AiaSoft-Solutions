# Explanation — 033. მასივის მაქსიმალური ელემენტი

## Approach

This is as standard as it gets for array processing. I just pull the first element out as my 'current max' and then run a linear sweep through the rest of the numbers. Every time I hit a value larger than my current champion, I update the variable. By the time the loop finishes, I'm guaranteed to be holding the maximum value in the set.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- You don't need to store the whole array if you're feeling fancy; you could just track the max on the fly as you read input.
- Initialize your max variable with the first element, not zero, because the input numbers might all be negative.

## Common Mistakes

- Initializing the max variable to 0, which breaks the code if all input numbers are negative integers.
