# Explanation — 309. შუა ციფრები

## Approach

Since we're guaranteed a four-digit number, we don't need any loops or string conversions. The two middle digits are the tens and hundreds places. Dividing by 10 and then taking the remainder by 10 gets the tens digit, while dividing by 100 and taking the remainder by 10 gives the hundreds one. Just sum them up and you're done.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division in C++ automatically truncates, making it perfect for discarding the digits you don't need.
- The modulo operator '%' is your best friend for isolating specific digits without messing with strings.

## Common Mistakes

- Trying to use strings just because 'digits' are involved, which is way slower and more code than needed.
