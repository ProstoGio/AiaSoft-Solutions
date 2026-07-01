# Explanation — 349. იპოვე მინიმალური

## Approach

This is a classic linear scan. Since I just need to find the smallest number, I pick the first element as my initial 'minimum' and then march through the rest of the array. Whenever I stumble upon a number smaller than what I've stored, I just swap out the old value for the new one. It's simple, efficient, and gets the job done in one pass.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Always initialize your minimum variable with the first element of the array rather than a random zero or a huge constant to avoid edge cases with negative numbers.
- The order doesn't matter here; we just care about the global minimum.

## Common Mistakes

- Initializing the minimum variable to 0, which fails if all numbers in the input are positive or negative.
