# Explanation — 348. ინდექსები

## Approach

This one is as straightforward as it gets. I read the array size and the target number first, then stash the rest of the inputs into a simple array. Since the indices need to be printed in ascending order, a single linear scan from index 0 to N-1 does the trick perfectly. I used a counter variable to keep track of whether I actually found the number, so I know whether to print the indices or default to -1 at the very end.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The zero-based indexing requirement aligns perfectly with a standard C++ for loop, so no offset math is needed.
- The 'cnt' variable acts as a flag to handle the case where the element isn't found at all.

## Common Mistakes

- Printing -1 inside the loop instead of checking after the loop finishes.
