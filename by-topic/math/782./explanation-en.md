# Explanation — 782. სოკო

## Approach

This one is a classic division problem. Since you can't have a fraction of a basket, if M isn't perfectly divisible by N, you have to round up to account for the remaining mushrooms. You could use ceil(M/N), but integer division is faster and cleaner for simple competitive programming tasks. Just check the remainder with the modulo operator and increment if it's non-zero.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division always truncates, so m/n effectively rounds down. Checking the remainder allows us to manually handle the 'ceiling' logic.
- Consider the edge case where m is 0; the code should ideally output 0, though the problem constraints are small enough that the current logic holds.

## Common Mistakes

- Forgetting to check the remainder and just outputting m/n, which misses the last partially filled basket.
