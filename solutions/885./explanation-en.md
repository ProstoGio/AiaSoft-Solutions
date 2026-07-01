# Explanation — 885. წრის ფართობი

## Approach

The problem asks to reverse the standard area formula. Since we know S = π * R², we just need to isolate R, which gives us R = sqrt(S / 3.14). I used a template struct just to keep things clean, but a simple double variable would do the job perfectly well. Since the problem guarantees R is an integer, the sqrt function will land right on the value we need.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The formula is simple algebra: divide the area by 3.14 and take the square root.
- Because the radius is guaranteed to be an integer, you don't need to worry about rounding or precision issues with floating-point math.

## Common Mistakes

- Forgetting to use 3.14 specifically as requested, rather than a more precise value of PI from cmath.
