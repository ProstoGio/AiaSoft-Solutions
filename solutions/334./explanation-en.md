# Explanation — 334. ბაბის სიმბოლო

## Approach

This one is as straightforward as it gets. Since we're just checking if a single character is a digit, we can leverage the ASCII table values. Every digit from '0' to '9' sits in a contiguous block starting at 48. If the character's integer value falls between 48 and 57 inclusive, it's a digit—simple as that.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The ASCII values for '0' through '9' are strictly ordered from 48 to 57.
- You don't need a complex library function; a simple range check on the character's underlying byte value does the trick.

## Common Mistakes

- Trying to use isdigit() without remembering it comes from <cctype>.
