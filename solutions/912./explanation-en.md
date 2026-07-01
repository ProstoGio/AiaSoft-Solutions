# Explanation — 912. საახალწლო ნათურები

## Approach

The sequence repeats every four digits: 2, 0, 2, 5. Instead of actually building a giant string, we just use the remainder of the index K when divided by 4 to map it directly to our '2025' pattern. If K is a multiple of 4, it lands on the last character, which is 5. Otherwise, the remainder gives us the index in our string.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The pattern has a period of 4, so modular arithmetic is your best friend here.
- Handling the case where K % 4 == 0 separately is necessary because array indexing starts at 0, while K starts at 1.

## Common Mistakes

- Forgetting that problem statements usually use 1-based indexing, which clashes with C++ 0-based strings.
