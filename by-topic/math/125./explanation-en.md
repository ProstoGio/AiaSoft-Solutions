# Explanation — 125. ბაქტერია

## Approach

This problem is basically about finding the Chebyshev distance between two cells on a grid. Since the bacteria spreads to all eight neighbors every day, the time it takes to reach (x2, y2) is determined by the maximum of the horizontal or vertical distance. If you think about it, moving diagonally is just like moving one step in both directions simultaneously. My code uses the abs function to find the absolute differences between the coordinates and takes the max of those two values.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The spread pattern follows the Chebyshev distance metric.
- Diagonal movement counts as a single day, which simplifies the math to max(|dx|, |dy|).

## Common Mistakes

- Trying to simulate the grid using a 2D array, which will fail due to memory limits for N, M up to 10^6.
- Forgetting to use absolute values when calculating coordinate differences.

## Walkthrough

Read the six input variables. Subtract x2 from x1 and y2 from y1 to get the vector of movement. Take the absolute value of both results. The answer is simply the larger of the two, because that's the bottleneck for the bacteria reaching the target cell.
