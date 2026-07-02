# Explanation — 025. მასივი და მისი ორი ელემენტი

## Approach

The brute force way would be checking every single pair, but O(n²) is definitely going to time out given n is up to 10⁵. Instead, I sort the array first, which makes it searchable. Once sorted, I iterate through each element a[i] and use binary search to look for the 'complement' — basically, (s - a[i]) — in the remaining part of the array. It’s a clean way to drop the complexity down to O(n log n).

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- Sorting is the heavy lifter here; once the data is ordered, you can skip massive chunks of the search space.
- The complement check (s - a[i]) turns a 2D search problem into a 1D binary search.

## Common Mistakes

- Using an O(n²) nested loop approach which hits the time limit.
- Forgetting to handle long long for the sum s and array elements since they go up to 10⁹.

## Walkthrough

Imagine s = 10 and you're at a[i] = 3. You just binary search for 7 in the subarray to the right. If 7 exists, you're done. If you finish the loop and find nothing, output NO.
