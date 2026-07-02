# Explanation — 213. სიმბოლოს გარდაქმნა

## Approach

The core of this problem is knowing how ASCII characters are laid out. Since we're dealing with uppercase Latin letters and need to shift them to their lowercase counterparts, we can take advantage of the constant offset between them. In the ASCII table, 'A' is 65 and 'a' is 97, which means the difference is exactly 32. Instead of using built-in functions like tolower(), I just added 32 to each character value and printed the result directly.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The ASCII difference between uppercase and lowercase characters is a constant 32.
- Direct arithmetic on characters is much faster and more 'low-level' than calling library functions.

## Common Mistakes

- Forgetting the space in the output since the problem asks for the sequence to be preserved with spaces.
