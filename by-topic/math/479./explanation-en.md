# Explanation — 479. სამშენებლო წელიწადი

## Approach

This is a classic 'ceiling division' problem. You have n tons of cargo and each truck can carry m, so the baseline is just n divided by m. The tricky part is when you have a remainder—if n isn't perfectly divisible by m, that leftover weight needs its own dedicated truck. Instead of using complex math libraries, a simple conditional check for the modulus is all you need to bump up the count.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- When n % m is non-zero, it means you have a partial load that still requires a full truck.
- Integer division in C++ automatically floors the result, which is why the remainder check is mandatory.

## Common Mistakes

- Forgetting to handle the case where n is perfectly divisible by m, leading to an extra truck being counted incorrectly.
