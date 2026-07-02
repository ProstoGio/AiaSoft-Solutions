# Explanation — 215. მატრიცის შევსება

## Approach

This one is as straightforward as it gets. You just need to initialize a square matrix of size n by n and fill every single cell with the integer x. I used a simple nested loop to assign x to every index, then another set of loops to print the result row by row. It's basically a warm-up for grid problems.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- Since every cell must contain the same value, you don't actually need to store the matrix in memory if you want to optimize space; you could just print x inside the loop.
- VLA (Variable Length Arrays) like `int matrix[n][n]` are non-standard in strict C++ but work fine on most competitive programming platforms like GCC.

## Common Mistakes

- Forgetting the space between numbers when printing, which leads to Wrong Answer.
