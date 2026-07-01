# Explanation — 260. მარყუჟი

## Approach

This problem is basically checking the main diagonal of the adjacency matrix. If you look at how a graph is stored this way, the diagonal element at row 'i' and column 'i' represents whether there's a path from node 'i' back to itself. That's literally the definition of a loop. So, I just read the whole matrix into a 2D array and checked if any g[i][i] equals 1. If I spot even one, I print 'YES' and bail out early, otherwise it's a solid 'NO'.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- The main diagonal of an adjacency matrix holds the self-loop information.
- You don't need to check every single element; if you find a 1 on the diagonal, you're done.

## Common Mistakes

- Accidentally trying to loop through all N*N cells and getting mixed up with indices or forgetting to return early.
