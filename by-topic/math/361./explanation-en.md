# Explanation — 361. ციფრთა ჯამი

## Approach

To get the sum of digits, I used a recursive approach rather than the standard while-loop. Think of it like peeling an onion: take the last digit using modulo 10 and add it to the result of the function called on the remaining digits (integer division by 10). It stops naturally when the number drops below 10, returning the last remaining digit. It's clean, short, and avoids dealing with extra variables.

## Complexity

| | |
|-|--|
| Time | O(log n) |
| Space | O(log n) |

## Key Insights

- The modulo operator (%) isolates the last digit, while integer division (/) strips it away.
- Recursion acts as a stack to keep track of the digits we've 'peeled' off before adding them back up.

## Common Mistakes

- Forgetting the base case (x < 10), which causes infinite recursion.
