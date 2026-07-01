# Explanation — 419. ავზი

## Approach

The goal here is to empty the tank as much as possible using 3 and 5-liter containers, which is essentially a greedy problem. You always want to maximize the use of the larger 5-liter container first to get rid of water quickly. Whatever is left over after filling 5s, we check if it fits into 3s. Since 5 is bigger than 3, prioritizing it is almost always the right call, except for some small edge cases like 7, where 5+3 doesn't work but we can leave 1.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Greedy strategy works perfectly because the numbers are small and the goal is just to minimize the remainder.
- The only real edge case is N=7, where taking a 5 leaves 2, but taking nothing leaves 7; mathematically, 7 mod 3 is 1, so we handle that specifically.

## Common Mistakes

- Overcomplicating the logic with loops when simple modulo arithmetic is enough.
