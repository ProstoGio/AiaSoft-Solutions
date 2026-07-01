# Explanation — 227. შუათანა ძმა

## Approach

This one is basically just checking which number sits between the other two. Since we know there are no twins, we don't have to worry about equal values, which makes the logic pretty straightforward. I used a set of if-else statements to test each variable against the others. If a value is greater than one and smaller than the other, that's automatically our middle brother.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The middle value is simply the one that fails the 'maximum' and 'minimum' criteria.
- Since there are only three numbers, brute-forcing the logic with conditions is faster and cleaner than sorting an array.

## Common Mistakes

- Forgetting to handle all combinations of the middle number being larger or smaller than its siblings.
