# Explanation — 426. ტრისკაიდეკაფობია

## Approach

This problem is basically about tracking the current floor while skipping the number 13. I treated the elevator logic as a two-step process: moving up by a and then moving down by b. Whenever the floor number crosses 13, I manually increment or decrement to jump over it. It's just a simple simulation of the actual floor count.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The elevator skips 13, so moving from 12 to 14 effectively counts as one step.
- I check if the movement spans across the 13th floor, both for going up and coming down.

## Common Mistakes

- Forgetting that the floor numbering shifts not just on the way up, but also when moving down past 13.
- Using a loop instead of simple math, which is overkill for this range.

## Walkthrough

First, I calculate the floor after going up. If the current floor is below 13 and the destination is 13 or higher, I add 1 to skip the phantom floor. Then, I do the same logic in reverse for the descent. It's a bit of brute-force logic, but given the constraints are only up to 50, it works perfectly.
