# Explanation — 849. სად არის მინიმუმი?

## Approach

This one is basically a walk in the park. Since we need to find both the minimum value and its position, I just initialized the first element as the current minimum and started a loop from the second index. Every time I stumble upon a value smaller than my current 'mn', I just update both the value and the index. It's clean, simple, and hits the target in one pass.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- No need for extra libraries or complex algorithms; a single pass is all you need.
- Keeping track of the index alongside the minimum value saves you from having to search for the position again later.

## Common Mistakes

- Forgetting that array indices start at zero, leading to an off-by-one error in the output.
- Initializing the minimum to zero instead of the first element, which breaks everything if the array contains only positive numbers.
