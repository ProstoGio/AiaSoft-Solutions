# Explanation — 008. ბავშვები და სტრიქონები

## Approach

The problem basically asks if two strings are anagrams. Instead of sorting them, which would be an O(N log N) overkill, I just counted the frequency of each character. Using two frequency arrays, I mapped each character 'a'-'z' to an index from 1 to 26. After filling these up, comparing them is trivial. If the arrays match perfectly, the strings contain the exact same characters.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(1) |

## Key Insights

- Frequency counting is almost always faster than sorting when you just need to check if character sets match.
- Since the alphabet is fixed at 26 letters, the extra memory usage is constant regardless of how long the strings are.

## Common Mistakes

- Forgetting to check string lengths first, though here comparing the frequency arrays handles that automatically.
