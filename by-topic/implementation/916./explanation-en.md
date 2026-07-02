# Explanation — 916. კომპილატორის ახალი ვერსია

## Approach

The main idea here is to process the code line by line and character by character. We look for the '->' sequence, but stop the replacement process immediately if we hit a double slash '//', as that marks the start of a comment. When we find '->', I simply turn the '-' into a '.' and erase the '>' so the final string looks exactly like the updated syntax.

## Complexity

| | |
|-|--|
| Time | O(N * M) |
| Space | O(M) |

## Key Insights

- The loop breaks as soon as it hits the start of a comment, which saves us from modifying things we shouldn't touch.
- Using string::erase is handy here, even though it shifts elements, because the constraints are small enough that performance isn't an issue.

## Common Mistakes

- Forgetting to check if the current character and the next one exist before accessing them, which could cause an out-of-bounds error.
