# Explanation — 211. სიმბოლო

## Approach

This one is as straightforward as it gets. Since the task is just to check if a single character is a digit, we don't need any complex logic or heavy lifting. The most efficient way is to use the standard `isdigit()` function provided by the `<cctype>` library—it's built exactly for this purpose. We grab the input as a string, poke at the first character, and let the library handle the check. It’s clean, readable, and does exactly what's asked without reinventing the wheel.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The isdigit() function is the cleanest way to handle this; it checks against the ASCII range for digits '0' through '9'.
- Inputting the character as a string is a safe habit because it avoids issues with leftover newline characters that sometimes plague cin when reading chars.

## Common Mistakes

- Some beginners try to write out if(c >= '0' && c <= '9') manually, which works fine but is unnecessary when the library already has a shortcut.
