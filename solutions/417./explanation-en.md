# Explanation — 417. ორი ბაჭია

## Approach

This is essentially a game theory problem hidden behind a jumping mechanic. Since the rabbits start at opposite ends and can't jump over each other, the space between them is all that matters. You can treat the gap between them as the real 'board'. Every time a player moves, they reduce that gap, and since the move limit is k, this turns into a simple Nim-like game where the winning strategy depends on the modulus of the available moves.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The board size n effectively becomes (n-2) because the rabbits already occupy two cells.
- If the gap size is divisible by (k+1), the second player (Bubi) can always mirror the first player's move to win.

## Common Mistakes

- Forgetting that the two cells occupied by the rabbits are 'dead' space that shouldn't be counted in the moves.

## Walkthrough

If n=5 and k=1, the gap is 3. Since 3 % (1+1) != 0, Babi makes a move, leaves the gap at 2 or 1, and eventually forces Bubi into a corner.
