# Explanation — 221. ქალაქი ჩე

## Approach

The core of this problem is to count pairs that are further apart than the distance r. A nested loop would give us O(n²), which is definitely going to TLE given n=300,000. Instead, we use a two-pointer approach to keep track of how many monuments satisfy the 'too far' condition for each starting point. As we slide the left pointer forward, the right pointer only ever moves in one direction, keeping the complexity linear.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Since the coordinates are already sorted, we don't need to worry about order. Sorting is redundant here but good to keep in mind if the input wasn't guaranteed to be sorted.
- The right pointer 'rt' finds the first monument that is strictly greater than r distance away; everything from that index to the end of the array forms a valid pair.

## Common Mistakes

- Using a nested loop approach which results in O(n²) time complexity.
- Off-by-one errors when counting the remaining elements (n-rt).

## Walkthrough

For n=4, r=3 and coordinates [1, 3, 5, 8]: When l=0 (val 1), the inner loop pushes rt until v[rt] > 1+3. rt hits index 2 (val 5). So, monuments 2 and 3 (values 5, 8) are valid. That's 2 pairs. Move l to 1 (val 3), rt stays at index 2, so only 8 is valid. Continue until done.
