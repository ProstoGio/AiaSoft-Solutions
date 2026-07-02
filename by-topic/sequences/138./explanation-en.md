# Explanation — 138. მასივი 1

## Approach

This one is as straightforward as it gets. You just read the entire sequence into an array first, so you have everything sitting in memory. Since you need to swap the first and last elements, you can just use a temporary variable to hold one of them while you perform the swap. After the swap, just loop through the array once more to print everything out.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- No need for fancy pointers or algorithms; a single temporary variable is all you need to swap two values safely.
- Remember that arrays in C++ are 0-indexed, so your first element is at index 0 and your last is at n-1.

## Common Mistakes

- Forgetting that n-1 is the correct index for the last element, leading to an 'off-by-one' error.
