# Explanation — 345. ბაბის მულტფილმი 2

## Approach

This problem is basically about handling time addition with modulo arithmetic. Since hours wrap around at 24 and minutes at 60, we just need to convert the total duration correctly. I calculated the total minutes first to see if they overflow into an extra hour. Then, I added the hours together and applied the modulo operator to keep everything within the standard 24-hour clock format.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Total minutes overflow should be handled before finalizing the hour count.
- Using (x % 24) is cleaner than manual if-else statements for the hour wrap-around.

## Common Mistakes

- Forgetting that (m1 + m2) might create more than one extra hour if you don't divide properly.
- Not handling the case where the time passes midnight (e.g., 23:00 + 2 hours).

## Walkthrough

I read the four inputs and calculated the minutes sum first. If m1+m2 is 60 or more, that carries over to the hour. The new hour is just (h1 + h2 + (m1+m2)/60) % 24. Then for minutes, it's just (m1+m2) % 60. It's a simple, direct math solution.
