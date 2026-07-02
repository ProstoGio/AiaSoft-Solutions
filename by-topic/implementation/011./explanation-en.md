# Explanation — 011. საყვარელი რიცხვები

## Approach

To get the largest N-digit number using only 8s and 9s without repeating the same digit twice in a row, we should always start with the biggest possible digit, which is 9. Once we place a 9, the next position must be an 8 to satisfy the rule. From there, we just keep flipping between 9 and 8 until we hit N digits. It's a greedy choice at every step because we want the most significant digits to be as high as possible.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Starting with 9 is the only way to maximize the value, as it makes the leftmost digit the highest it can possibly be.
- The alternating pattern is forced; once the first digit is picked, every subsequent digit is locked into a choice of 'the other one' to avoid adjacency.

## Common Mistakes

- Overthinking it by trying to use recursion or DP when a simple loop is enough.
