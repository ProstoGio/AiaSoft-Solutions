# Explanation — 382. საგუშაგოები

## Approach

The problem essentially boils down to finding Strongly Connected Components (SCCs). Once you contract the graph into a Directed Acyclic Graph of SCCs, you realize that for each component, you only need one checkpoint to cover all nodes within that SCC. Since you have to pick the cheapest node in each SCC, the total cost is just the sum of minimums from every component. Counting the ways is straightforward—you multiply the frequencies of the minimum values found in each individual component.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N + M) |

## Key Insights

- If you can reach node A from B and vice versa, they are in the same SCC; building a station anywhere in an SCC covers the whole thing.
- Kosaraju's algorithm is a clean way to find these components without dealing with the extra state needed for Tarjan's.

## Common Mistakes

- Forgetting that if multiple nodes have the same minimum cost in an SCC, you have to multiply their counts, not add them.

## Walkthrough

Imagine an SCC with nodes costing [5, 2, 8, 2]. You pick the minimum (2), and since there are two nodes with that cost, you have 2 ways for this component. If you have another SCC with one node costing 10, you add 10 to your total cost and multiply your total ways by 1 (the count of min nodes in that SCC).
