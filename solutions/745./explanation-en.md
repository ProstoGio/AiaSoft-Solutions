# Explanation — 745. ციფრთა ჯამი - 2

## Approach

Since the upper limit is only 10⁵, brute force is totally fine here. I just wrote a helper function to sum up digits by stripping them off one by one using modulo 10. Then, I loop from a to b, keep a running maximum, and update it whenever I find a larger digit sum. It’s a straightforward approach that doesn't need any complex math tricks because the constraints are so small.

## Complexity

| | |
|-|--|
| Time | O((b-a) * log10(b)) |
| Space | O(1) |

## Key Insights

- The input range 10⁵ is small enough that O(N log N) logic passes within the 1-second limit easily.
- Calculating digit sums using repeated division and modulo is the cleanest way to handle integers in C++.

## Common Mistakes

- Forgetting that a and b might be in any order, though the problem implies a to b range.
- Initializing the maximum with 0 instead of the digit sum of the first number, which could cause bugs if the sum were negative (though impossible here).
