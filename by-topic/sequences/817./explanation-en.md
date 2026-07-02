# Explanation — 817. მეგობრული წევრები

## Approach

The trick here is to just look for every overlapping window of three elements. Since a sequence like '15, 15, 15, 15' counts as two triplets, you don't need to 'skip' indices or worry about consuming elements. I just iterate through the array and check if the current element matches the next two. If the condition holds, I increment my counter.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Because the problem asks for overlapping triplets, a simple sliding window of size 3 works perfectly without complex state management.
- The loop condition stops at n-2 to avoid out-of-bounds access when checking i+1 and i+2.

## Common Mistakes

- Accessing indices beyond the array bounds by not restricting the loop to n-2.
- Trying to skip elements after finding a triplet, which causes you to miss overlapping ones.
