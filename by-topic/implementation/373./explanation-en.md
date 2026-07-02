# Explanation — 373. გამოტოვებული რიცხვი

## Approach

Since the sequence is already sorted and we need the smallest non-negative integer missing, we just need to verify existence. I used a frequency array to mark every number that appears in the input. After marking them, the logic is trivial: just scan from 0 upwards and stop at the first index that hasn't been flagged. It’s an efficient way to solve this without needing a complex search or sorting overhead.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(M) where M is the max value |

## Key Insights

- If the first N numbers are present, the answer must be N, so we only need to check up to N.
- Using a simple frequency array (or a boolean flag) makes checking for presence an O(1) operation.

## Common Mistakes

- Allocating an array that is too small for the max possible input constraint.
