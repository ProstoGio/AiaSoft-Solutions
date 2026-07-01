# Explanation — 719. მძლავრად ბმული კომპონენტების რაოდენობა

## Approach

To find the Strongly Connected Components (SCCs), I went with Kosaraju's algorithm. The logic is elegant: first, we perform a DFS to order vertices by their finish times. Then, we transpose the graph—reversing all the edges—and perform a second DFS following that reverse order. By traversing the reversed graph, we effectively isolate each component because you can't 'escape' an SCC once you enter it, forcing the search to stay trapped within its boundaries.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- The adjacency matrix uses O(n²) space, which fits since N is 10,000, though it's pushing the memory limit—an adjacency list is usually safer but this works for this constraint.
- The order of processing in the second DFS is determined by the decreasing finish times from the first pass, which is exactly why the algorithm works.

## Common Mistakes

- Forgetting to clear the 'used' arrays or resetting the transposed graph incorrectly.
- Trying to use a simple BFS for the second pass, which won't correctly partition the components.

## Walkthrough

Imagine a graph where A points to B, B to A, and B to C. DFS1 visits C first, finishes, then B and A. We get a finish-time order of C, B, A. Reversing the edges gives C to B, and B to A. Processing them in reverse order (A, then B, then C) ensures we hit the A-B cycle first as one component, then C as a separate one.
