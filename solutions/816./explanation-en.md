# Explanation — 816. ტყუპი წევრები

## Approach

This one is pretty straightforward. You just need to walk through the array and check every neighbor pair to see if they fit the 'twin' criteria. Since the condition requires them to be odd numbers with a difference of exactly 2, I just check if the current element is odd and if the absolute difference between it and the next one equals two. If both are true, I increment my counter.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The key is the difference condition: |a[i] - a[i+1]| == 2. This guarantees they are consecutive odd numbers if the first one is already odd.
- Always check up to n-1 to avoid an out-of-bounds error when looking at the next element.

## Common Mistakes

- Forgetting that the problem explicitly requires the numbers to be odd, not just having a difference of 2.
