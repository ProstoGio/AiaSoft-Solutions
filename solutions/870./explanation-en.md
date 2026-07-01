# Explanation — 870. კარგი სამეული - 2

## Approach

Since the problem guarantees a 'good' triplet—where two numbers match and one is unique—I don't need any complex logic. I just check the pairs. If the first two match, the third is my target. If not, I just compare the others until I isolate the odd one out. It’s basically a simple nested conditional chain.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The input constraint is small enough that simple if-else branches are the cleanest, most readable way to handle this.
- Since we know for a fact that two numbers are identical, there's no need to handle edge cases where all three are the same or all different.

## Common Mistakes

- Trying to use arrays or sorting when simple direct comparison is instant.
