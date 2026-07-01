# Explanation — 472. ოთახის ფართობი

## Approach

This is a classic connected components problem disguised as a grid search. Since we need the largest area, I treated each '.' as a node and their adjacent connections as edges in an undirected graph. Running a DFS from every unvisited '.' cell effectively floods the room until it hits a '#' wall or the grid boundary. Keeping a `used` matrix is non-negotiable here to make sure we don't count the same room twice or get stuck in an infinite recursion loop.

## Complexity

| | |
|-|--|
| Time | O(N²) |
| Space | O(N²) |

## Key Insights

- The grid can be viewed as an adjacency matrix where every '.' is connected to its 4-way neighbors.
- Resetting the global `ans` counter after every DFS call is a quick way to isolate the size of each room without needing complex data structures.

## Common Mistakes

- Forgetting to check the array bounds (like i-1 or j+1) inside the DFS, which leads to segmentation faults.
- Failing to clear the `ans` variable between room checks.

## Walkthrough

Imagine a 3x3 grid. Start at (1,1). If it's a '.', the DFS fires. It hits (1,2) and (2,1), marking them as 1. The recursion bubbles up, increments `ans` at each stop, and once the traversal finishes, the total size is saved. Then we move to the next unvisited cell in the main loop.
