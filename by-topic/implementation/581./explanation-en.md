# Explanation — 581. სიმპატიური მატრიცა

## Approach

To check if the matrix is 'sympathetic', I iterate through every possible 2x2 square in the grid. Since a square is defined by its top-left corner at (i, j), I loop from 0 to N-2 and 0 to M-2. Inside, I check if all four cells—c[i][j], c[i+1][j], c[i][j+1], and c[i+1][j+1]—are identical. If they match, I immediately set a flag to false and break out of the loops.

## Complexity

| | |
|-|--|
| Time | O(N * M) |
| Space | O(N * M) |

## Key Insights

- A 2x2 square is 'bad' only if all four values are equal, meaning all are 0 or all are 1.
- The loop boundaries must be N-1 and M-1 to avoid going out of bounds when checking the neighbor cells.

## Common Mistakes

- Forgetting to check the bounds of the nested loops, which leads to segmentation faults.
- Thinking you need to check for all-zeros and all-ones separately, even though one logic check handles both.

## Walkthrough

I store the input in a 2D array and then scan the grid. The nested loops look at current cell (i, j) along with its neighbors to the right, below, and diagonal. If they all share the same value, the matrix fails the condition.
