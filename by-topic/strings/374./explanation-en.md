# Explanation — 374. რიცხვთა ნაერთი

## Approach

At first, you might be tempted to use math to glue these numbers together, maybe by finding the number of digits in the second number and shifting the first one over. That's a headache, though. Why not just treat the numbers as strings from the start? Since the goal is just to see which combination is bigger, we can concatenate them in both possible orders—'a+b' and 'b+a'—and let the string comparison handle the heavy lifting.

## Complexity

| | |
|-|--|
| Time | O(L) |
| Space | O(L) |

## Key Insights

- String comparison works lexicographically, which is exactly what we need when comparing numbers of potentially different lengths or identical digit structures.
- Appending two strings is way cheaper and less error-prone than calculating powers of 10 for digit shifting.

## Common Mistakes

- Trying to convert back and forth between integers and strings inside a loop instead of just comparing the two resulting permutations.
