# Explanation — 023. ინვერსიების რაოდენობა (მარტივი)

## Approach

Since the constraint is small (n ≤ 10³), a simple nested loop is perfectly fine. I just iterate through every possible pair of indices (i, j) where i < j and check if a[i] > a[j]. Every time that condition hits, I increment a counter. It's the most straightforward brute-force way to solve it.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n) |

## Key Insights

- Small constraints allow an O(n²) approach, so no need for Merge Sort or Fenwick trees here.
- The definition of an inversion is strictly about indices, so two loops comparing all pairs do the job.

## Common Mistakes

- Forgetting the i < j constraint and overcounting pairs.
- Using an int for the answer if n was larger, though here int is sufficient.

## Walkthrough

I read the input into a vector and then nested loops go through every index. The outer loop picks i, the inner loop picks j starting from i+1. If a[i] > a[j], that's an inversion, so I add it to the answer and print it.
