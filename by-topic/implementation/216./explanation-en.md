# Explanation — 216. მარცხენა მთავარი დიაგონალი

## Approach

This one is basically a warm-up. Since we need the main diagonal elements of a square matrix, just look at the coordinates—they’re always where the row index equals the column index, like (0,0), (1,1), and so on. You don't even need to store the whole matrix if you want to be fancy, but keeping it in a 2D array is perfectly fine for n=20. Just read the inputs into a grid and grab the values where the indices match.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- The main diagonal is defined by the set of elements where i == j.
- Reading the full matrix first is a safe habit, even though you could technically sum the diagonal on the fly.

## Common Mistakes

- Confusing the main diagonal (i == j) with the secondary diagonal (i + j == n - 1).
