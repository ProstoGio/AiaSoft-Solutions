# Explanation — 935. ეშმაკური იდეა

## Approach

The total sum of numbers from 1 to N is a simple arithmetic progression, Sn = n*(n+1)/2. If S matches this, we need zero changes. If S > Sn, we only need to change one plate to a larger number to cover the gap. When S < Sn, we need to replace k plates with smaller ones to reduce the total sum by D = Sn - S. By picking the k largest numbers, we maximize the reduction, which gives us the best shot at reaching the target with minimal changes.

## Complexity

| | |
|-|--|
| Time | O(log n) |
| Space | O(1) |

## Key Insights

- Replacing the k largest numbers provides the maximum possible sum reduction.
- The reduction capacity for k plates is k*n - k*(k-1)/2, but since we replace them with 1s, the actual impact is V - k.
- Binary search works here because the reduction capacity is monotonic with respect to k.

## Common Mistakes

- Using an incorrect formula for the sum of the k largest elements.
- Forgetting the edge case where S > Sn.

## Walkthrough

First, calculate the base sum of the building. If it's too small, we just swap one plate. If it's too big, we perform a binary search on the number of plates k to find the smallest set that can be reduced to make the total sum equal to S. The formula k*n - k*(k-1)/2 represents the sum of the top k elements, and subtracting k accounts for replacing them with 1s.
