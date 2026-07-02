# Explanation — 212. სიმბოლოთა ჯაჭვი

## Approach

ASCII values make this super straightforward since characters are just integers under the hood. I created a dummy array to map integers to their characters, though honestly, you could just increment the char variables directly. The logic checks if the starting character is smaller or larger than the target, then just runs a loop in the correct direction. It handles both ascending and descending cases by swapping the loop increment for a decrement.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- Characters in C++ are stored as ASCII codes, so you can treat them like numbers in your loops.
- The loop condition handles the directionality automatically by checking the comparison between the two inputs.

## Common Mistakes

- Forgetting that the range can be descending, leading to an empty output if you only write an increasing loop.
