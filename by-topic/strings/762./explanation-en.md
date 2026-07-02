# Explanation — 762. კონგრუენტულობა

## Approach

The core of the problem is mapping the unique characters of your input string to a new set of characters that preserve the relative ordering. Since we need the lexicographically smallest and largest versions, we just identify every distinct letter present in the source string. For the smallest version, we map the first unique character alphabetically to 'A', the next to 'B', and so on. For the largest, we do the reverse: map the first character appearing in the input to 'Z', the next to 'Y', and keep going backwards.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- The relative order condition is really just a fancy way of saying we need an isomorphic string mapping.
- Sorting unique characters by their first appearance is the key to maintaining that isomorphism.

## Common Mistakes

- Forgetting to check if a character has already been mapped, which would ruin the 1-to-1 consistency required.
