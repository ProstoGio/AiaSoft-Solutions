# Explanation — 055. გაფუჭებული ვაშლები

## Approach

This one is basically just handling a 2D grid where one rotten apple spreads its 'rot' to all eight neighbors. My first thought was to use a bunch of nested `if` statements, but that's messy and prone to index out-of-bounds errors. Instead, I just initialized a grid with zeros, set the center apple to 1, and brute-forced the neighboring eight cells to 1. Since the grid size is at most 100x100, we don't even need to worry about being clever; the brute force approach is instantaneous.

## Complexity

| | |
|-|--|
| Time | O(N * M) |
| Space | O(N * M) |

## Key Insights

- Instead of writing complex logic for boundaries, remember that C++ handles out-of-bounds array access by potentially crashing or acting weirdly, but since we are only marking the immediate neighbors, we can either use padding or just be careful with the grid indices.
- The simplest way is to fill the whole matrix with zeros first, then manually set the specific indices for the rot.

## Common Mistakes

- Accessing indices like [x-1][y-1] when the rotten apple is at [1][1], which causes an out-of-bounds error.
- Forgetting to check the matrix bounds (e.g., if x=1, x-1 will be 0, which is outside the 1..N range).
