# Explanation — 486. მკაცრად ზრდადობა

## Approach

This problem is straightforward: just iterate through the array and compare each element with the next one. If you ever find a pair where the current element is greater than or equal to the next one, the sequence isn't strictly increasing. I use a simple loop that runs up to n-1 to avoid an out-of-bounds error. If the loop finishes without finding any issues, the sequence passes the test.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Strictly increasing means a[i] must be strictly less than a[i+1].
- Equality is forbidden, so a[i] >= a[i+1] is the condition to break.

## Common Mistakes

- Forgetting to check the edge case where the array has only one element.
- Using an incorrect loop condition that causes a segmentation fault by accessing index n.

## Walkthrough

I store the input in a vector and loop from index 0 to n-2. Inside, I check if a[i] >= a[i+1]. If that condition hits, I print 'NO' and exit immediately. If I reach the end without triggering the return, the array is strictly increasing, so I print 'YES'.
