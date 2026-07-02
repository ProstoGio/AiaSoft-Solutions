# Explanation — 404. აბა, ვინ მოიგებს ??

## Approach

This is a classic Nim-style game where you can take 1, 2, or 3 candies. The key is to look for winning positions, which are multiples of 4. If you leave your opponent with a multiple of 4, they are stuck because any move they make—adding 1, 2, or 3—will land on a number that isn't divisible by 4, letting you immediately pull them back to a multiple of 4 on your next turn. Once they hit 0, you've won.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- If N is a multiple of 4, the person who moves second always wins because they can mirror the opponent to keep the candy count divisible by 4.
- If N is not a multiple of 4, the first player has an immediate advantage by taking the remainder (N % 4) and shifting the winning position to their opponent.

## Common Mistakes

- Forgetting to account for who goes first, which simply flips the winner if N is not divisible by 4.
