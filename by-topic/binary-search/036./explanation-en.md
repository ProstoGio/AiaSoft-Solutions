# Explanation — 036. ასტერიქსი და ობელიქსი

## Approach

This problem is a classic application of binary search on the answer. Since the total number of cakes eaten increases monotonically with time, we can define a search space for the time duration. For any given time 'm', we check if the total cakes eaten by Asterix and Obelix (m/a + m/b) meets the target N. If they eat enough, we try to shrink the time, otherwise, we increase it.

## Complexity

| | |
|-|--|
| Time | O(log(N * min(a, b))) |
| Space | O(1) |

## Key Insights

- The function f(t) = floor(t/a) + floor(t/b) is monotonic, which makes it perfect for binary search.
- The upper bound can be safely set to N * min(a, b) since even the faster person alone would finish by then.

## Common Mistakes

- Using an insufficient upper bound for the binary search range when N, a, or b are large.
- Integer overflow during the calculation (m/a + m/b), although using long long handles this correctly.

## Walkthrough

I set the left bound at 0 and the right at 1e18 to cover all cases. Inside the loop, I calculate how many cakes are eaten in time 'm'. If the result is greater or equal to N, I store 'm' as a potential answer and try smaller times by moving 'r'. Otherwise, I push 'l' forward to find a larger duration.
