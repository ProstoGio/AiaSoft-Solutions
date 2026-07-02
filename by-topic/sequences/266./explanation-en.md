# Explanation — 266. უდიდესი ზრდადი ქვემიმდევრობა

## Approach

This is a classic Longest Increasing Subsequence problem. Since the constraints are small (N=100), an O(n²) DP solution is perfectly fine and easy to implement. We define an array 'd' where each index 'i' stores the length of the longest increasing subsequence that ends exactly at 'a[i]'. To compute this, for every element, we look back at all previous elements and, if we find a smaller one, we carry over its DP value plus one. The final answer is simply the maximum value found in our 'd' array.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n) |

## Key Insights

- The DP state isn't just the global maximum, but the best sequence ending at a specific index.
- The inner loop acts as a filter, only considering 'a[j] < a[k]' to satisfy the increasing requirement.

## Common Mistakes

- Forgetting to initialize the DP array with 1s, since a single element is always a subsequence of length 1.

## Walkthrough

For input [10, 22, 9], 'd[0]' is 1 (seq: 10). For 'd[1]', 22 > 10, so it takes 'd[0]+1' = 2 (seq: 10, 22). For 'd[2]', 9 is smaller than 10 and 22, so it doesn't extend them and stays 1.
