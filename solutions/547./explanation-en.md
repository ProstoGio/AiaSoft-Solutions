# Explanation — 547. ფოთლები

## Approach

Since the input is a tree where node 1 is the root, a leaf is simply any node that isn't the root and only has one connection. In an undirected adjacency list, that connection is its parent. If a node has a degree of 1 and isn't the root, it’s a leaf. The root itself is a special case; even if it only has one neighbor, the problem definition says it doesn't count as a leaf.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The degree of a node (size of its adjacency list) directly tells us if it's a leaf.
- Root is an edge case: skip node 1 when checking the degree condition to ensure the root isn't counted as a leaf by mistake.

## Common Mistakes

- Forgetting that the root is not a leaf even if it has only one connection.
