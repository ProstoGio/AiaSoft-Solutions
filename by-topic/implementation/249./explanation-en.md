# Explanation — 249. მასივის ელემენტების წანაცვლება - 1

## Approach

The goal is to shift every element to the left by one position and wrap the first element around to the end. Instead of creating a second array, I just iterate through the vector and swap adjacent elements. By swapping from left to right, the first element gradually 'bubbles' all the way to the last index. This keeps the logic clean and avoids using extra memory.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Swapping adjacent elements sequentially achieves the desired rotation without needing a temporary buffer.
- The loop only needs to run until n-1 to move the first element to the end.

## Common Mistakes

- Trying to shift elements using a secondary array which wastes memory.
- Off-by-one errors in the loop boundary.

## Walkthrough

First, I read the size N and fill the vector. The loop runs from 0 to n-2, swapping index i with i+1. If the input is [1, 2, 3, 4], the first swap makes it [2, 1, 3, 4], then [2, 3, 1, 4], and finally [2, 3, 4, 1].
