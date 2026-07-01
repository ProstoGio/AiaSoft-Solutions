# Explanation — 247. უდიდესი ციფრი

## Approach

Since the input is always a two-digit number, there's no need for loops or fancy parsing. We can just isolate the tens digit with integer division and the units digit using the modulo operator. The `max` function makes picking the winner trivial. Keeping it as a separate function is just cleaner for the logic.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division `n / 10` effectively drops the last digit, leaving only the tens place.
- The modulo operator `n % 10` isolates the remainder, which is exactly the units place for a two-digit integer.

## Common Mistakes

- Overcomplicating the logic by converting the number to a string instead of using simple arithmetic.
