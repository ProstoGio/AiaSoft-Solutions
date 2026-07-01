# Explanation — 704. ინტერვალის ჯამი

## Approach

If you try to sum the numbers for every query from scratch, you'll hit O(N*Q) and the time limit will crush you. The trick is to precalculate the prefix sums in a 'dp' array where each index stores the total from the start up to that point. This way, the sum of any range [l, r] becomes a simple subtraction of two precomputed values. It’s a classic way to turn a slow range query into an O(1) operation.

## Complexity

| | |
|-|--|
| Time | O(N + Q) |
| Space | O(N) |

## Key Insights

- Prefix sums transform range sum queries from O(N) linear scans into O(1) math.
- Always use long long because summing up 2*10^5 elements of size 10^9 will definitely overflow a standard 32-bit int.

## Common Mistakes

- Forgetting to handle 1-based indexing correctly, leading to off-by-one errors when subtracting.
- Using int instead of long long, which causes overflow on large inputs.
