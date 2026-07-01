# Explanation — 799. კარგი სამეული

## Approach

This one is basically just checking conditions. We need to verify if exactly two numbers are equal while the third one is different. The simplest way to handle this is checking the three possible pairs: (a==b and c!=a), (a==c and b!=a), or (b==c and a!=b). If any of these scenarios trigger, the triplet qualifies as good. Otherwise, it's a 'No'.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The definition of 'good' excludes the case where all three numbers are equal, like (5, 5, 5).
- Using logical OR between the three specific equality cases covers every valid configuration.

## Common Mistakes

- Forgetting to check the inequality condition, which leads to failing cases like (5, 5, 5).
