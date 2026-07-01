# Explanation — 063. ციფრების ჯამი

## Approach

Since the input number can have up to 500 digits, it definitely won't fit into a standard integer type, so reading it as a string is the only way to go. I used a recursive function to process the string index by index. Each call grabs the current character, converts it to its integer value by subtracting '0' (or 48 in ASCII), and adds it to the result of the next recursive call. The base case kicks in when the index hits the string length, returning zero to stop the stack from growing further.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Treating the number as a string is a classic move when dealing with 'big integers' that exceed 64-bit limits.
- Subtracting 48 from the char is just a quick shortcut to map ASCII digits to their real integer values.

## Common Mistakes

- Trying to store the input in a 'long long' or 'unsigned long long', which will overflow immediately for 500 digits.
