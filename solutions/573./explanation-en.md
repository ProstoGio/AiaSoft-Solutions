# Explanation — 573. სუნთქვა

## Approach

At first, I thought about keeping a counter or a loop, but that’s overkill for such a small N. If you look at the sequence—1-2 (in), 3-4 (out), 5-6 (in), 7-8 (out)—it’s just a repeating pattern of 4. Every four counts, Zuka completes one full cycle of both actions. The remainders modulo 4 tell you exactly where he stopped: if he finishes on 2, he's done with his first 'in'; if he stops on 3, he's midway through an 'out'.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The pattern repeats every 4 numbers, so taking N % 4 reduces the whole problem to checking the tail end of the sequence.
- If the remainder is 2 or 3, it means Zuka finished a breathing-in phase after finishing the inhale numbers.

## Common Mistakes

- Overcomplicating the solution with a loop when simple modular arithmetic handles the state perfectly.
