# Explanation — 141. ბორანი

## Approach

This one is as straightforward as it gets. You're given a boat's capacity and a bunch of items, so you just need to see if the total mass of those items exceeds what the boat can handle. I just summed up all the weights in a simple loop as I read them in. If the final sum is less than or equal to the capacity, the answer is a clear 'YES'.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- You don't actually need an array to store the weights; summing them on the fly is much cleaner.
- The logic is a simple comparison between the total weight and the maximum capacity.

## Common Mistakes

- Trying to use complex sorting or grouping algorithms when simple addition is enough.
