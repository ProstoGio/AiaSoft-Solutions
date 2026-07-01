# Explanation — 254. მასივის დალაგება - 1

## Approach

Since the array size is tiny (N <= 100), there’s absolutely no need to overcomplicate things with complex algorithms like Quicksort or Mergesort. I just went with a standard Bubble Sort. It’s definitely not the fastest, but for N=100, the O(n²) performance is perfectly fine and runs in a split second. Basically, I'm just pushing the largest elements to the end of the array by swapping adjacent pairs until the whole thing is in order.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n) |

## Key Insights

- Bubble sort is honestly the most intuitive choice when you're dealing with such small constraints.
- The nested loop structure ensures that after every pass of the outer loop, the next largest number lands in its correct position at the back.

## Common Mistakes

- Trying to implement a complex algorithm for a problem where brute force is perfectly efficient.
