# Explanation — 856. მოლაშქრე კენგურუ

## Approach

The problem asks us to count jumps for a kangaroo that only moves to the next strictly taller mountain it encounters. First, I identify the maximum height and its position to know where to stop. Then, I iterate through the array, keeping track of the last mountain Beka landed on. Every time I find a mountain taller than the current one, I increment the jump count and update the 'current' position.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- The greedy choice is always the 'first' taller mountain available after the current one.
- Since we need to stop at the absolute maximum, finding its index first helps manage the loop.

## Common Mistakes

- Forgetting that the kangaroo starts on the first mountain, meaning the first jump is already 'counted' as position 1.
- Trying to use dynamic programming unnecessarily when a simple linear scan works.

## Walkthrough

I read all heights into a vector. I track the index of the highest mountain so I know where to stop. By using a 'prev' variable, I constantly compare the current mountain height to the one Beka is currently standing on. If the current height is greater, I update 'prev' to the current index and increase the jump counter. Finally, I just print the value stored at the index of the maximum height.
