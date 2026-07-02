# Explanation — 120. ყუთები

## Approach

This is essentially the Longest Increasing Subsequence problem disguised as a box-stacking challenge. Since the order of boxes in the input is fixed, we just need to decide which boxes to keep to maximize the total height. I used a DP array where each index stores the maximum possible height ending at that specific box. For every box, I look back at all previous boxes and check if the current one fits on top; if it does, I update the height. The clever trick here is normalizing the base dimensions by swapping them so the smaller value is always first, which makes the 'does it fit?' check trivial.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n) |

## Key Insights

- Always sort the base dimensions (width and depth) of each box. By ensuring width ≤ depth, you don't have to manually rotate the boxes during the comparison check.
- The DP relation is standard: dp[i] = height[i] + max(dp[j]) for all valid j < i where box i fits on box j.

## Common Mistakes

- Forgetting that the input order is fixed, which tempts people to sort all boxes by size instead of keeping the sequence order.
- Trying to account for every possible rotation rather than just swapping dimensions once to normalize them.

## Walkthrough

If you have box A and box B, and B comes after A in the input, you check if A's base (w1, d1) is larger than B's base (w2, d2). If w2 <= w1 and d2 <= d1, then B can sit on top of A. Your total height at B becomes current height + DP[A].
