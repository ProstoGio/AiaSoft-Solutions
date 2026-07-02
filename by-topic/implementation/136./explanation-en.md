# Explanation — 136. ქეთი და კოტე

## Approach

This one is basically just tracking the parity of the petals. Since we start with 'loves me' on the first petal, odd numbers like 1, 3, and 5 will always end on the positive outcome. Even numbers hit the 'loves me not' phrase. Just check if the number is odd, and you're good to go.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The sequence is alternating, so parity is the only thing that matters.
- An odd input leads to 'YES' because the sequence starts and ends on the first option.

## Common Mistakes

- Overthinking it by trying to use a loop or an array to simulate the plucking process.
