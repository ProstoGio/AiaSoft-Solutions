# Explanation — 246. სამი კუ

## Approach

This one is as straightforward as it gets. Since the speed of a turtle is inversely proportional to the time it takes to reach the finish line, the slowest turtle is simply the one with the smallest input value. I just used an `if-else` chain combined with C++'s `min` function to pick the smallest integer among the three. Comparing the minimum against each variable does the job perfectly.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The turtle with the lowest speed value is guaranteed to arrive last because distance is constant.
- Using `min({a, b, c})` is a clean C++11 way to find the minimum of an initializer list without nesting multiple comparisons.

## Common Mistakes

- Mixing up the logic and outputting the fastest turtle instead of the slowest.
