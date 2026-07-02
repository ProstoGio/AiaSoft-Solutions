# Explanation — 328. ლუწი რიცხვები

## Approach

This one is as straightforward as it gets. I just need to iterate from a to b and check each integer to see if it's even. The condition i % 2 == 0 is the bread and butter here. Since the constraints are tiny—only up to 20—a simple while loop is more than enough.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- The modulo operator is the easiest way to identify parity.
- A simple linear scan is efficient enough since the upper bound is just 20.

## Common Mistakes

- Forgetting to include the endpoints a and b in the iteration.
