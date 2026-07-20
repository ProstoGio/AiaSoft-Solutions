# Explanation — 408. სამი გოჭი

## Approach

This is a simple implementation task where we keep track of the total wins for Nif-Nif and Naf-Naf. We iterate through each round, comparing the chosen numbers to determine who wins based on the standard Rock-Paper-Scissors rules. If the moves are the same, no one gets a point, effectively ignoring those rounds for the final tally. After counting, we just compare the totals to see who comes out on top or if they are tied.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(1) |

## Key Insights

- The tie case where Nif-Nif and Naf-Naf have equal scores defaults to Nuf-Nuf.
- Rock-Paper-Scissors logic can be handled with simple if-else blocks instead of complex arrays.

## Common Mistakes

- Forgetting that a tie in the game doesn't give a point to anyone, it just keeps the score gap the same.
- Incorrectly checking the win conditions for all combinations of 1, 2, and 3.

## Walkthrough

Read N first, then loop N times. Inside the loop, read the two choices. Use a conditional chain to see if Nif-Nif or Naf-Naf won, or if it was a draw. Finally, compare the two counters to print the winner.
