# Explanation — 376. კომპონენტები

## Approach

This problem is a classic application for Disjoint Set Union (DSU). Since we need to track component sizes as edges are added, DSU handles the merging perfectly with path compression and union by size. I used a multiset to keep the sizes in order automatically after every union operation. Every time two components merge, I just remove their old sizes from the multiset and push the new combined size back in.

## Complexity

| | |
|-|--|
| Time | O(M * (α(N) + N)) |
| Space | O(N) |

## Key Insights

- Using a multiset keeps the component sizes sorted at all times, saving us from sorting a vector repeatedly.
- The Union-Find structure is efficient enough here since N is only 1,000, making the operations nearly constant time.

## Common Mistakes

- Using a standard 'set' instead of 'multiset' will cause bugs when multiple components have the same size (e.g., two components of size 2).

## Walkthrough

Imagine N=3. Initially, multiset is {1, 1, 1}. If we add (1,2), we find roots of 1 and 2, merge them into a component of size 2, erase two 1s from the multiset, insert 2, and end up with {1, 2}.
