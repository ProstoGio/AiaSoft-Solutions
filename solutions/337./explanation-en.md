# Explanation — 337. რეგისტრის ცვლილება

## Approach

This one is basically ASCII manipulation. I just store the characters in an array and check their integer values. Since uppercase letters start at 65 and lowercase at 97, there's a constant offset of 32 between them. If I see a value below or equal to 90, it's uppercase, so I just add 32; otherwise, I subtract it to shift back down.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The ASCII table is your best friend here. Knowing that 'A' is 65 and 'a' is 97 makes the logic trivial.
- You don't need fancy library functions like toupper() or tolower() if you just want to do the math yourself.

## Common Mistakes

- Forgetting that input streams might handle whitespace differently, though here it's just one character per line.
