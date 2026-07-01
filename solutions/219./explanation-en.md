# Explanation — 219. შავუჯროვანი კუ

## Approach

The trick here is realizing that a chessboard is just a grid where the parity of the coordinates tells you the color. Since the bottom-left corner (row 7, col 0 in 0-indexed terms) is black, I just summed up every cell where the sum of indices `i + j` is odd. This covers all black squares regardless of how the tortoise moves, since it can reach any black square on the board.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- On a standard chessboard, a cell is black if the sum of its row and column indices is odd (assuming 0-indexing starting from the bottom-left corner).
- Since the problem states the bottom-left is black, checking `(i + j) % 2 != 0` is the most direct way to filter the input.

## Common Mistakes

- Confusing the 0-indexing of a C++ array with the standard 1-based indexing of a chessboard, which flips the parity check.
