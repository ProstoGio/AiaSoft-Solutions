# Explanation — 587. თამაში გადანაცვლებაზე

## Approach

Since n is only 15, we're looking at a classic game theory problem that screams state-space search. I used a bitmask to represent the current subset of the permutation. If the current sequence is already sorted, the player whose turn it is loses—or rather, the previous player made the last move, so we treat this as a P-position. Otherwise, we try removing every element one by one and check if any resulting state leads to a losing position for the opponent.

## Complexity

| | |
|-|--|
| Time | O(T * n * 2^n) |
| Space | O(2^n) |

## Key Insights

- The game is a standard impartial game, so recursion with memoization on the bitmask is perfect here.
- The 'check' function is essentially just verifying if the remaining subset is non-decreasing; if it's already sorted, the game is over.

## Common Mistakes

- Forgetting to clear the DP table between test cases, which will definitely mess up your results.
- Misinterpreting the winning condition—since the game ends when the sequence is sorted, whoever gets to that state effectively loses because they can't make a move.

## Walkthrough

Consider n=3, sequence [3, 2, 1]. Mask 111 is our start. Removing '3' leaves [2, 1] (not sorted), removing '2' leaves [3, 1] (not sorted), removing '1' leaves [3, 2] (not sorted). You branch out these sub-masks until you hit a sorted state, which returns false, bubbling back up to determine if the starting mask is a winning state.
