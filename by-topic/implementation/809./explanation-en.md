# Explanation — 809. 1 და 7

## Approach

The problem asks for alternating numbers consisting of 1s and 7s. Since the constraints go up to 2 billion, there aren't actually many of these numbers to check. I realized I could just generate them by building strings manually, starting from '1' and '7'. As long as the integer value stays under our limit, I keep appending the 'opposite' digit to the end of the current string. It’s a pretty simple brute-force generation that hits the limit in a few dozen iterations, tops.

## Complexity

| | |
|-|--|
| Time | O(log x) |
| Space | O(log x) |

## Key Insights

- There are very few valid numbers within a 2 billion range, so you don't need a complex math formula.
- Building strings by appending digits is much easier than trying to iterate through all numbers and check them one by one.

## Common Mistakes

- Forgetting that the numbers grow in string length; using 'int' instead of 'long long' if the barrier was larger, though 'int' is fine for 2*10^9.
