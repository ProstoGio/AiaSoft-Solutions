# Explanation — 197. სიტყვების დათვლა

## Approach

The main headache here is dealing with those pesky multiple spaces between words. Instead of trying to split the string and clean it up, I just prepended a dummy space to the beginning of the input. Now, I can just look for every instance where a character isn't a space, but the one immediately before it is. It turns the problem into a simple "detect the start of a word" task.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Adding a space at the beginning is a classic trick to handle the edge case where the string starts with a word.
- By checking if s[i] is a character and s[i-1] is a space, you catch the start of every new word regardless of how many spaces sit in between.

## Common Mistakes

- Forgetting about leading or multiple spaces and just counting every space character you see.
