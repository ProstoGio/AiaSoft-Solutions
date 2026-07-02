# Explanation — 623. სტრიქონები წიგნში

## Approach

This one is basically just finding how many full pages fit before our line and what the remainder is. If you divide N by K, the quotient gives you the number of pages already passed. The tricky part is when N is perfectly divisible by K, because the remainder becomes zero, which would mean the last line of a page instead of the 'zero-th' line.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division handles the page counting, but you have to watch out for the boundary case where N is a multiple of K.
- Using the modulo operator tells you the exact line number unless the result is zero, in which case you just hardcode the line to K.

## Common Mistakes

- Forgetting that if N % K is 0, the line number should be K, not 0.
