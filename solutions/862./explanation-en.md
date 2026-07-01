# Explanation — 862. ნახევარმატრიცა

## Approach

The task asks us to fill the top-right triangle of a matrix with a given number x, while keeping the rest as zeros. Instead of messing around with complex conditional checks inside a full grid traversal, I just pre-filled the whole matrix with zeros first. Then, I focused on the main diagonal and everything to its right by starting the column loop at j = i. This naturally restricts the update to the upper-right section, including the diagonal itself, just like the problem asks.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- Starting your inner loop at j = i is the cleanest way to handle upper-triangular regions without needing messy 'if' statements.
- Initializing the grid with zeros first makes the logic much simpler because you only care about setting the non-zero values afterwards.

## Common Mistakes

- Messing up the loop bounds and accidentally missing the diagonal by starting at j = i + 1 instead of j = i.
