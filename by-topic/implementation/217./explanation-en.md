# Explanation — 217. მთავარი დიაგონალები

## Approach

The trick here is to grab elements from both the main and anti-diagonals in a single pass. For the main diagonal, you just look at indices where row equals column (i, i). For the anti-diagonal, you use a second index that starts at the last column and decrements as you move down. If the matrix size is odd, the middle element gets added twice, so you just subtract it once at the end to keep the sum correct.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- The anti-diagonal element for row i is always at index n - 1 - i.
- The intersection of the two diagonals only happens when n is odd, specifically at the middle element.

## Common Mistakes

- Forgetting to subtract the middle element in odd-sized matrices, which counts it twice.
