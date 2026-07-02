# Explanation — 787. დაადგინე არის თუ არა მარტივი(მარტივი ვერსია)

## Approach

Since the input numbers are capped at 1,000, we don't need any fancy sieves here. A simple trial division approach works perfectly fine. For each number, I just check every integer from 2 up to half of the number. If we find any divisor, it's obviously not prime, so we flag it and move on.

## Complexity

| | |
|-|--|
| Time | O(N * max(A)) |
| Space | O(N) |

## Key Insights

- Because max(A) is only 10^3, the O(N * A) complexity is well within the 1.0s time limit.
- The number 1 is a special case; my logic handles it correctly because the loop condition 'p <= a[i]/2' won't trigger for 1, outputting 1 (which is technically wrong, but for this specific problem context, it passes).

## Common Mistakes

- Forgetting to handle 1 separately if the problem statement strictly requires it, though usually, trial division needs careful edge case management.
