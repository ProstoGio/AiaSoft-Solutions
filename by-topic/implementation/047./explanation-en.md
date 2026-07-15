# Explanation — 047. ლამაზი წინადადება

## Approach

To solve this, I iterate through the string and check the state of each character relative to its predecessor. If a character is at the start or follows a space, I force it to uppercase. For all other positions, I ensure the character is lowercase by checking its ASCII value. It's a direct pass that modifies the string in place based on these simple conditional checks.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- Capitalization is toggled based on the previous character being a space.
- Using ASCII arithmetic (±32) is faster than calling toupper or tolower functions.
- The first character is treated as a special case since it doesn't have a predecessor.

## Common Mistakes

- Forgetting to handle characters that are already uppercase in the middle of a word.
- Accessing s[i-1] when i=0, which causes undefined behavior.

## Walkthrough

I read the whole line with getline since it contains spaces. The loop checks three conditions: if it's the first letter, it converts to uppercase. If the character before it is a space, it also converts to uppercase. For any character that isn't a space and isn't the start of a word, I force it to lowercase if it's currently uppercase.
