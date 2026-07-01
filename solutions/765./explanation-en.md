# Explanation — 765. დიაპაზონი

## Approach

Since the numbers are bounded by 100,000, we don't need a heavy data structure like a segment tree. Instead, we can just treat the input as a frequency distribution. By creating a frequency array and building a prefix sum array on top of it, we turn every range query into a simple subtraction. This effectively handles all M queries in constant time after the initial preprocessing.

## Complexity

| | |
|-|--|
| Time | O(N + M + max(V)) |
| Space | O(max(V)) |

## Key Insights

- The value range constraint is small enough that we can map values directly to array indices.
- The query [A, B] is equivalent to prefix_sum[B] - prefix_sum[A-1], which is solved here by using the frequency count to correct the boundary.

## Common Mistakes

- Not handling cases where A or B exceed the maximum value found in the input.
- Off-by-one errors when subtracting prefix sums.

## Walkthrough

If we have frequencies [0, 2, 1, 0, 3], the prefix sum array s2 will store the cumulative count. Querying [1, 2] pulls s2[2] - s2[1] + s[2], giving us exactly the sum of counts at indices 1 and 2.
