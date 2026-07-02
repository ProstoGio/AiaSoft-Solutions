# Explanation — 711. რიცხვებით თამაში

## Approach

This problem is a classic shortest path search on an unweighted graph, which immediately screams Breadth-First Search (BFS). Each 4-digit number acts as a node, and the four allowed operations define the edges connecting these nodes. Since we want the minimum moves to get from number A to B, BFS is perfect because it explores layer by layer, ensuring the first time we hit B, we’ve found the shortest route.

## Complexity

| | |
|-|--|
| Time | O(V + E) |
| Space | O(V) |

## Key Insights

- The number space is tiny—only 9,000 possibilities—so you don't need fancy optimizations, just a simple queue and a visited array.
- The cyclic shift operations are just basic modular arithmetic, just be careful not to mess up the digit extraction logic.

## Common Mistakes

- Forgetting to handle the constraints on the operations, like the check that the first digit shouldn't be incremented if it's already 9.

## Walkthrough

Start with A in the queue. Pop it, generate all four possible neighbors, check if they've been visited, and if not, push them with a distance of current_dist + 1. Repeat until you hit B.
