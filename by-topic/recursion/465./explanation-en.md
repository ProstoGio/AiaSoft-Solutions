# Explanation — 465. უდიდესი კომპონენტის წვეროები

## Approach

The core idea is simple: we just need to find every connected component in the graph and keep track of the one with the most nodes. Since N is tiny, we can just iterate through every node from 1 to N, and if we haven't visited it yet, fire off a DFS to explore that whole component. We store the nodes found in the current component in a vector, compare its size to our current best, and update if we've found a larger one. Once we've checked everything, we just sort that winning vector and print the contents.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N + M) |

## Key Insights

- Using a simple visited array is enough to keep from re-visiting nodes during the DFS.
- Because N is only 20, we don't need any complex data structures; raw vectors work perfectly.

## Common Mistakes

- Forgetting to clear the 'placeHolder' vector after each component scan, which would mess up your size comparison.
