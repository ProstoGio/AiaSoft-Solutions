# Explanation — 798. დათვალე ბურთები

## Approach

This one is basically just simple math once you look past the giant numbers. Since we are adding 'a' blue balls followed by 'b' red ones, the pattern repeats every 'a + b' balls. To find the blue balls in the first 'n' positions, I just calculated how many full cycles fit into 'n' and multiplied that by 'a'. The only tricky bit is the leftover balls; if the remainder is bigger than 'a', we've finished the blue part of the cycle, so we just add 'a'. Otherwise, we add whatever the remainder is.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The problem boils down to integer division and the modulo operator.
- You don't need a loop because the period of the sequence is fixed at a+b.

## Common Mistakes

- Forgetting to handle the case where the remainder is less than 'a' when counting the final partial cycle.
