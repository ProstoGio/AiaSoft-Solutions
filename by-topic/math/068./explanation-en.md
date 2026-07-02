# Explanation — 068. ბიოლოგიური რიტმები

## Approach

The core of the problem is finding a day when the physical, emotional, and intellectual cycles align. Since the periods are relatively small prime-like numbers (23, 28, 33), we can calculate the absolute day number for each peak provided. Then, we start checking from the current day plus one, using simple modular arithmetic to see if the distance from each peak is a multiple of that cycle's period. A brute-force search is perfectly fine here because the cycle of cycles repeats every 21,252 days, which is small enough for a 1.0s time limit.

## Complexity

| | |
|-|--|
| Time | O(21252) |
| Space | O(1) |

## Key Insights

- The triple-peak day happens when (p - k1) % 23 == 0, (p - k2) % 28 == 0, and (p - k3) % 33 == 0 all evaluate to true simultaneously.
- The modulus of these three periods is 21,252, which is small enough that a linear scan is extremely fast.

## Common Mistakes

- Forgetting to increment the current day before starting the check, as the problem asks for the *next* occurrence.
