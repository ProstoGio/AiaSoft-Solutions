# Explanation — 014. ლუწი ხე

## Approach

The trick here is realizing that if you cut an edge, the subtree below that edge needs to have an even number of nodes. If a subtree has an even count, cutting it off leaves an even amount in both the resulting piece and the rest of the tree. I used a DFS to calculate the size of every subtree. Once I knew the count of nodes for every subtree, I just counted how many nodes (excluding the root) had an even-sized subtree attached to them.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- If a subtree has an even number of nodes, removing the edge above it results in two even components.
- The root doesn't get counted because there's no edge above it to cut.

## Common Mistakes

- Forgetting to ignore the root node when counting the cuts.

## Walkthrough

For a tree rooted at 1, perform DFS. As the recursion unwinds, add the number of nodes in the child's subtree to the parent. If `leaves[i]` is even for any node `i > 1`, it means that edge `(parent[i], i)` can be cut safely.
