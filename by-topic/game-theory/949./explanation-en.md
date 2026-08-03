# Explanation — 949. შოკოლადის ფილა

## Approach

This is a classic Nim-style game where you can take 1, 2, or 3 pieces. If N is a multiple of 4, the first player (Mari) will always lose because whatever she picks, Taso can complement it to make the sum of pieces removed in a round equal to 4. Since the total is N, Taso ensures that every 'round' of turns subtracts 4 from the total until zero. If N isn't divisible by 4, Mari can simply remove N % 4 pieces on her first turn to reach a multiple of 4, effectively putting Taso in the losing position.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The game is a simple modulo 4 problem.
- Positions that are multiples of 4 are 'P-positions' (previous player winning), others are 'N-positions' (next player winning).

## Common Mistakes

- Trying to use DP for N = 10^9, which will result in Memory Limit Exceeded or Time Limit Exceeded.
- Forgetting to check the n % 4 == 0 case first.

## Walkthrough

Read N as input. Check if N % 4 equals 0. If it does, print 'Taso' because she can always win. Otherwise, print 'Mari' because she can force the remainder to zero on her first move.
