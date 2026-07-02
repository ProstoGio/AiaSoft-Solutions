# Explanation — 423. ორი ერთიანი

## Approach

Since the constraint N is up to 10^9, we know any number with two bits set will be less than 2^30. I just used two nested loops to generate all possible combinations of two set bits, represented as 2^i + 2^j. The outer loop picks the higher bit position, and the inner loop handles the lower one. If the sum stays within N, I count it; otherwise, I break early since any further combination will definitely exceed the limit.

## Complexity

| | |
|-|--|
| Time | O(log² N) |
| Space | O(1) |

## Key Insights

- Any number with two bits set can be written as 2^i + 2^j, where i > j.
- Because N is small, brute-forcing all pairs up to 30 bits is instantaneous.

## Common Mistakes

- Forgetting to check the condition (1<<i) + (1<<j) <= x inside the loop, leading to an overflow or wrong answer.
