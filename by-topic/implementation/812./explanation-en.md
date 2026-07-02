# Explanation — 812. უდიდესი კენტი

## Approach

This one is pretty straightforward. You just need to keep a 'max' variable to track the largest odd number you find while scanning the array. Since all the input numbers are natural, initializing your tracker to zero works perfectly because zero isn't odd and won't interfere with the search. If the tracker stays zero after the loop finishes, you just output -1 to satisfy the problem requirement.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Starting your tracker at 0 is a clean way to handle the 'not found' case without needing extra flags.
- The modulo operator is the fastest way to verify if a number is odd.

## Common Mistakes

- Forgetting that the array might contain only even numbers, which would lead to an incorrect output of 0 instead of -1.
