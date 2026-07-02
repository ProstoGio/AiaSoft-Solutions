# Explanation — 139. პირველი ნომერი ცელქობა

## Approach

The problem asks us to reverse a swap operation where every even-indexed element was swapped with its immediate neighbor. Since swapping is its own inverse, doing the exact same thing twice returns the array to its original order. I just iterate through the array, check if the current index is even, and ensure there's actually a next element to pair it with. If both conditions hold, I swap them back and move on.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Swapping is a symmetric operation; if A swaps with B, doing it again brings them back to their original positions.
- The constraint i+1 < n is crucial, otherwise you'll get an out-of-bounds error on the last element if n is even.

## Common Mistakes

- Forgetting to check if the next element exists before accessing i+1, which causes a segmentation fault on arrays with an even number of elements.
