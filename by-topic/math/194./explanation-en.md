# Explanation — 194. სიმბოლოს გადაჩოჩება

## Approach

This problem is basically a cyclic shift within the English alphabet. Since ASCII values are sequential, I just treat 'a' as 0 and 'z' as 25. By using the modulo operator with 26, I can handle any N regardless of how large it gets. The code checks if the shift stays within the 'z' boundary; if not, it wraps around using the remainder.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The alphabet has 26 letters, so any shift N is equivalent to N % 26.
- ASCII math is the fastest way to handle character rotation without arrays.

## Common Mistakes

- Forgetting that N can be larger than 26.
- Handling the wrap-around logic incorrectly by manually subtracting 26 instead of using modulo.

## Walkthrough

First, take the input character and the integer N. If simple addition exceeds 'z' (ASCII 122), I shift relative to 'a' using (n - ('z' - c) - 1) % 26. Otherwise, I just add the integer directly to the char. It’s a quick way to keep the character in the [a-z] range.
