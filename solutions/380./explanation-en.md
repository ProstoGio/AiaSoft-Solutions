# Explanation — 380. მთელი წერტილები

## Approach

At first glance, you might want to simulate points along the line segment using a loop, but that's overkill. The segment between two integer points $(x_1, y_1)$ and $(x_2, y_2)$ is essentially a vector with components $\Delta x$ and $\Delta y$. The number of integer points on this segment is defined by the greatest common divisor of those components. Since the problem asks for points excluding the endpoints, subtracting one from the GCD result gives you the exact answer.

## Complexity

| | |
|-|--|
| Time | O(log(min(|x1-x2|, |y1-y2|))) |
| Space | O(1) |

## Key Insights

- The segment is divided into equal intervals by its integer points; the number of steps to reach the end is exactly gcd(|Δx|, |Δy|).
- Subtracting 1 from the GCD handles the requirement to exclude the two original endpoints.

## Common Mistakes

- Forgetting to use absolute values when calculating Δx and Δy, which breaks the GCD function.
- Misinterpreting the question and including the endpoints in the final count.
