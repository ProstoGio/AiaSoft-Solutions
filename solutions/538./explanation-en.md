# Explanation — 538. ჭადრაკის დაფა და დედოფლები

## Approach

This is a classic backtracking problem where we place one queen per row, moving column by column. The twist is that some squares are pre-blocked, so I check if a spot is both free and safe before placing a queen. If the queen fits, I mark the cell, move to the next row, and clean up the board with backtracking once that path finishes.

## Complexity

| | |
|-|--|
| Time | O(8!) |
| Space | O(1) |

## Key Insights

- The check function scans all diagonals and the current row/column to ensure no existing queen attacks the new position.
- By placing one queen per row, we automatically eliminate the horizontal threat, which simplifies the recursion depth to exactly 8.

## Common Mistakes

- Forgetting to reset the cell back to '.' after the recursive call, which breaks the board state for the next branch.

## Walkthrough

For row 0, I try each column. If (0,0) is '.', I verify safety, place a '1', and call rec(1). If at any point I can't place a queen in a row, the function returns, and I backtrack to the last valid state.
