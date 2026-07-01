# Explanation — 854. სრული პალინდრომი

## Approach

When I first read the problem, I thought I needed to check every possible substring, but then I realized that for any string to have all its substrings be palindromes, every single character must be identical. If you have even two different characters, say 'a' and 'b' in 'aba', the substring 'ab' isn't a palindrome. So, the 'full palindrome' condition is actually just a fancy way of saying all characters must be the same regardless of case.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- A string where every substring is a palindrome can only contain identical characters.
- The case-insensitivity means 'A' and 'a' should be treated as the same character.

## Common Mistakes

- Trying to implement a complex nested loop check for every substring instead of realizing the trivial pattern.
