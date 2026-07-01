# Explanation — 871. კარგი სამეული - 3

## Approach

Since the problem guarantees a 'good triplet'—where two numbers match and one is unique—the logic is straightforward. We just compare the variables against each other. If 'a' equals 'b', 'c' is the odd one out. If 'a' doesn't match 'b', we check if 'a' equals 'c'; if so, 'b' is the winner. Otherwise, 'a' must be the unique one.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- You don't need fancy arrays or loops for just three variables; simple conditional logic handles all cases.
- The order of checks covers all permutations: (a,a,c), (a,c,a), and (b,a,a).

## Common Mistakes

- Overcomplicating the logic with unnecessary nested conditions or thinking you need a sorting algorithm for three numbers.
