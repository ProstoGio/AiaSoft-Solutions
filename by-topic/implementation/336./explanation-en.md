# Explanation — 336. მთავრული სიმბოლო

## Approach

ASCII is the secret weapon here. Since every lowercase letter in the ASCII table sits exactly 32 positions away from its uppercase counterpart, we don't actually need complex libraries or conditional checks. I just grab the character, subtract 32 from its integer value, and cast it back to a char. It's an instant conversion that keeps the code clean.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Lowercase 'a' starts at 97 and 'A' starts at 65; the difference is exactly 32.
- C++ implicitly handles the char-to-int math, so you can just subtract 32 directly from the character variable.

## Common Mistakes

- Forgetting that the input is a character; if you try to subtract 32 from a whole string without picking the first index, it'll fail.
