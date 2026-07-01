# Explanation — 757. მიმდევრობა

## Approach

This one is as straightforward as it gets. You don't need to store all the heights in an array because the problem only asks for a count. I just keep a running total and increment it whenever the current input is strictly less than Misho's height K. It saves memory and keeps the code super clean.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- You don't need to save the input into an array; you can just process each number on the fly.
- The condition is strictly 'less than', so make sure you don't accidentally include students who are exactly the same height as Misho.

## Common Mistakes

- Using <= instead of < in the comparison check.
