# Explanation — 022. ღრმად ძებნაში შესვლის და გამოსვლის დრო

## Approach

The core of this problem is keeping track of a global timer as you navigate the graph. When I visit a node, I mark it as 'used' and record the current tick as its entry time. Only after finishing all the recursive calls for all neighbors do I record the exit time. Since the problem demands that we visit neighbors in increasing order of their indices, sorting each adjacency list right after building the graph is a mandatory step.

## Complexity

| | |
|-|--|
| Time | O(m log m) |
| Space | O(n + m) |

## Key Insights

- The entry time increases immediately upon hitting a node, while the exit time increments only after the entire subtree is explored.
- Sorting adjacency lists is crucial because even if the graph structure is identical, the order of nodes matters for the problem's specific requirements.

## Common Mistakes

- Forgetting to run DFS on disconnected components if the graph isn't fully connected, though the problem implies a single start point, checking remaining nodes ensures total coverage.

## Walkthrough

Imagine a simple chain 1-2-3. Start at 1: t_in[1]=1. Move to 2: t_in[2]=2. Move to 3: t_in[3]=3. Node 3 has no more edges, so t_out[3]=1. Back in node 2, no more neighbors, t_out[2]=2. Finally back in 1, t_out[1]=3. The logic maps the recursion stack depth progression perfectly.
