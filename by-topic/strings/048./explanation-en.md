# Explanation — 048. პირველკლასელი

## Approach

Since the input is always a tiny, three-character string, we don't need any complex parsing. We just grab the characters at indices 0 and 2 for the numbers and index 1 for the operator. Converting a char digit to an int is dead simple—just subtract the ASCII value of '0', which is 48. After that, it's just a basic if-else check to decide whether to add or subtract.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Subtracting 48 (or '0') from a character digit is the classic way to get its integer value in C++.
- The string index is fixed since the problem guarantees a three-character format.

## Common Mistakes

- Forgetting to convert characters to integers, which leads to adding/subtracting ASCII values instead of the numbers themselves.
