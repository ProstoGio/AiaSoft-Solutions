# Explanation — 343. საბავშვო მოედანი 3

## Approach

The problem asks if three seats are adjacent in a circular arrangement. I modeled the chairs as a graph where each seat points to its two neighbors. Since the seats are in a circle, I specifically linked 1 with N. Then, I just checked all permutations of the three seat numbers to see if any two are neighbors of the third.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- The circular connection means 1 and N are neighbors.
- Checking adjacency is easier if you pre-map neighbors for every seat.

## Common Mistakes

- Forgetting the circular wrap-around between 1 and N.
- Hardcoding neighbor checks instead of using a structure.

## Walkthrough

I create a vector of pairs where each index represents a chair and stores its left and right neighbors. After building this map, I simply verify if one chair is a neighbor of the others, covering all seating combinations.
