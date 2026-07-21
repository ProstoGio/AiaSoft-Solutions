# Explanation — 729. შეფ ვასოს კერძები

## Approach

This problem is basically about geometry. If you cut a circle through its center once, you get two pieces. Every additional diameter cut creates exactly two new pieces because you're splitting existing ones. So, the number of pieces is just double the number of cuts.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The formula is simply 2 * n when n > 0.
- The case for n = 0 is a bit tricky, but the problem implies if you don't cut it, you have 0 pieces (since it says the whole pizza doesn't count as a slice).

## Common Mistakes

- Trying to use the Lazy Caterer's sequence (n*(n+1)/2 + 1) which applies to non-diametrical cuts.
- Forgetting to handle the n=0 edge case where output should be 0.

## Walkthrough

The code reads the integer n and outputs 2*n directly. Since the problem states n can be 0 and the whole pizza isn't a slice, 2*0 results in 0, which correctly satisfies the condition.
