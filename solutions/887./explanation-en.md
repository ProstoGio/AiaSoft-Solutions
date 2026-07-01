# Explanation — 887. πრველი კენტების ჯამი

## Approach

This one is a classic math trick. If you list out the first few odd numbers—1, 3, 5, 7—you notice a pattern immediately. The sum of the first one is 1 (which is 1²), the first two sum to 4 (2²), and the first three sum to 9 (3²). You don't need any loops here; just squaring the input n gives you the answer instantly.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The sum of the first n odd numbers is always exactly n squared.
- Since n can be up to 10⁹, you have to use long long to avoid overflow when calculating n*n.

## Common Mistakes

- Forgetting to use long long and getting an overflow for large inputs.
