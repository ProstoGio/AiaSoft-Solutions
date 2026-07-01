# Explanation — 286. სინონიმები

## Approach

This is a classic Disjoint Set Union (DSU) application. Since synonym chains imply transitive relationships, I treated each synonym pair as an edge in a graph and grouped connected components together. After building the DSU structure, I just tallied the unique parent pointers to find the total number of groups. To find the largest group, I did a simple count of how many nodes shared the same final root.

## Complexity

| | |
|-|--|
| Time | O(N * M) due to the naive counting loop at the end, though DSU operations are nearly constant. |
| Space | O(N) |

## Key Insights

- Transitive property of synonyms is just connectivity in a graph.
- DSU is overkill for N=500 but keeps the logic super clean.

## Common Mistakes

- Forgetting to call find_set one final time for all elements before counting group sizes.
- Overcomplicating the search for the largest component instead of a nested loop.
