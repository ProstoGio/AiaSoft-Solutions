# Explanation — 571. ხაჭაპური

## Approach

This one is basically a classic geometry puzzle disguised as a coding problem. If you take a circle and cut it once through the center, you get two halves. Add another cut that also goes through the center, and you've got four pieces. It’s pretty simple—every single cut through the middle doubles the number of pieces because each line splits two existing regions into four.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Zero cuts leave you with one whole piece of khachapuri.
- Any cut passing through the center creates two new regions from the existing ones, resulting in 2*N total slices.

## Common Mistakes

- Forgetting that 0 cuts still result in 1 piece, leading to a wrong output for N=0.
