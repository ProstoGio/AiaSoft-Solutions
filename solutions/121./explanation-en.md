# Explanation — 121. ციფრების ჯამი

## Approach

Since the input can reach 10^200, we absolutely can't store it as an integer. I treated it as a string, which makes pulling digits off one by one easy. The logic is simple: take the current character, turn it into an int, and add it to the result of the same function called on the rest of the string. Recursion handles the rest until we're down to just one digit.

## Complexity

| | |
|-|--|
| Time | O(n^2) |
| Space | O(n) |

## Key Insights

- The '-48' or '- '0'' trick is the standard way to convert a char to its integer value based on ASCII.
- Using string::erase inside a recursive function makes this O(n^2) because each erase call shifts the remaining string elements.

## Common Mistakes

- Forgetting to handle the negative sign at the start, since the problem specifies absolute value for inputs up to 10^200.
