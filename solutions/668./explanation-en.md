# Explanation — 668. ღობის შეღებვა

## Approach

This is a classic DP problem where we decide at every fence post whether to paint the block ending there or skip it. Since we must pick 5 consecutive boards at a time, the state at index i is either the sum of the current block plus the optimal value from index i-5, or just the best value we found by skipping the i-th board entirely. I used an array 'd' where d[i] stores the max sum possible up to board i, multiplied by 10 at the very end to account for the width.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The recurrence relation is just a choice between taking the current 5-board block or sticking with the best result found just one position back.
- By defining the state d[i] as the maximum paintable area up to index i, we naturally handle the 'skip' option with d[i-1].

## Common Mistakes

- Forgetting to multiply by 10 at the end since the problem asks for total area, not just total height.
- Going out of bounds by not handling the first 4 indices correctly.

## Walkthrough

If N=6, we calculate d[0..4] as 0. For d[5], we compare (sum of 1..5) with d[4]. For d[6], we compare (a[2]+a[3]+a[4]+a[5]+a[6] + d[1]) with d[5]. It's a sliding window of decision-making.
