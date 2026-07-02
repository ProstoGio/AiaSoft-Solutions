# Explanation — 415. რა დღეა?

## Approach

This one is basically just tracking how many full days have passed. Since a day has 24 hours, you just add the current hour 'h' to the elapsed time 'n' and divide by 24 to see how many days move forward. The modulo operator is your best friend here because it handles the wrap-around from Sunday back to Monday perfectly.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division by 24 gives you the exact number of full 24-hour cycles completed.
- Using the modulo 7 operator keeps the day index within the 1-7 range, just remember to adjust for the case where the remainder is zero.

## Common Mistakes

- Forgetting that Monday is 1, not 0, which leads to issues when the math results in 0 (Sunday).
