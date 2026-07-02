# Explanation — 570. უახლოესი რიცხვი

## Approach

Since the sequence is sorted, searching linearly for the nearest number would be way too slow given the constraints. Instead, I used binary search to pin down the two closest candidates for each query. By narrowing the range down until only two adjacent elements remain, I just check which one has the smaller absolute difference to our target. If the distances are equal, the problem asks for the minimum, so I just pick the left one.

## Complexity

| | |
|-|--|
| Time | O(Q log N) |
| Space | O(N) |

## Key Insights

- The binary search loop condition 'r - l > 1' is the secret sauce here—it stops the search right when you're looking at a pair of numbers surrounding the target.
- Handling the tie-breaker is trivial since we keep the smaller index as the default choice when distances are equal.

## Common Mistakes

- Forgetting to check the case where the target is smaller than the first element or larger than the last one, though the logic here handles those bounds implicitly.

## Walkthrough

If we have [10, 20, 30] and look for 22, the loop narrows down to l=1 (a[1]=20) and r=2 (a[2]=30). |22-20|=2 and |22-30|=8. Since 2 < 8, we output 20.
