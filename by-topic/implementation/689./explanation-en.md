# Explanation — 689. ფერადი კარტები

## Approach

This one is as straightforward as it gets. Niko has two piles of cards, red and blue, and he just needs a table big enough to hold both piles combined. Since he needs to fit all of them, you just add the two integers together. No loops, no conditions, just basic arithmetic.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Total capacity is simply the sum of the two individual quantities.
- Constraints are small enough that integer overflow isn't even a concern here.

## Common Mistakes

- Overthinking it by trying to find a pattern or complex relationship where none exists.
