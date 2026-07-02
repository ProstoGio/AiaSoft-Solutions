# Explanation — 511. 2 - ის ხარისხი

## Approach

To check if a number is a power of two, I just keep dividing it by two as long as it's even. If I hit 1, it's definitely a power of two. If I end up with an odd number that isn't 1, I know for sure it's not. I implemented this using a simple recursive function that bit-shifts the number to divide by two.

## Complexity

| | |
|-|--|
| Time | O(log n) |
| Space | O(log n) |

## Key Insights

- Any power of two in binary looks like a 1 followed by only zeros, so dividing by two repeatedly just shifts that bit right.
- If you reach 1 through these divisions, you've successfully verified the power.

## Common Mistakes

- Forgetting to handle 1 as the base case for 2^0, which often leads to an infinite loop or wrong output.
