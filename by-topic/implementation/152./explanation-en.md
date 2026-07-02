# Explanation — 152. ცათამბჯენი

## Approach

The elevator starts at floor 1, so the first calculation is just the movement from 1 to the first requested floor. After that, we just iterate through the array, comparing the current floor with the next one to figure out if we're moving up or down. I keep a running total for the total time and use a simple comparison variable to keep track of the maximum duration found so far. It’s pretty straightforward logic—just watch out for the direction changes since they use different speed constants.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The initial move from floor 1 is a special case that needs to be handled before entering the main loop.
- Always check if the next floor is higher or lower than the current one to decide whether to multiply by the 'up' or 'down' variable.

## Common Mistakes

- Forgetting that the elevator starts at floor 1 and calculating distance from floor 0 instead.
- Mixing up the up/down speed variables in the logic.
