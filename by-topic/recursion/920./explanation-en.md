# Explanation — 920. წყალდიდობა

## Approach

This problem is basically asking how many connected components are in the graph. If you think about it, every separate 'island' of halls needs at least one extra bridge to connect to the rest of the network. If you have K separate components, you just need K-1 bridges to link them all together into one big graph.

## Complexity

| | |
|-|--|
| Time | O(N + M) |
| Space | O(N + M) |

## Key Insights

- The number of bridges needed is always exactly (number of connected components - 1).
- Using DFS to label each node as visited is the standard way to count these components.

## Common Mistakes

- Forgetting that 0 components means 0 bridges, or miscounting when the graph is already fully connected.
