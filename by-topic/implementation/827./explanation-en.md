# Explanation — 827. პალინდრომია?

## Approach

The simplest way to check for a palindrome is to just flip the string around and see if it looks identical to the original. I grabbed the input into a variable, made a copy so I wouldn't lose the original, and then used the built-in reverse function. If they match, it’s a palindrome—easy as that. Since the constraints are tiny, this brute-force approach is perfectly fine.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Using the standard library's reverse function saves a ton of manual work and keeps the code clean.
- Keeping a copy of the string is necessary because reversing operates in-place.

## Common Mistakes

- Forgetting to store the original string before reversing, which makes the comparison impossible.
