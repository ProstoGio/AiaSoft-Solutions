# Explanation — 476. უდიდესი ზრდადი ქვემიმდევრობა - 2

## Approach

This is a classic dynamic programming problem where we need to find the Longest Increasing Subsequence (LIS). I used an array `dp[i]` to keep track of the longest sequence ending specifically at index `i`, along with a vector of vectors `d[i]` to store the actual path. Whenever we find a previous element `a[j]` that is smaller than `a[i]`, we check if extending that sequence gives us a better length than we've currently found for `i`. Updating the path is the trickiest part—by copying the vector `d[j]` and appending `a[i]`, we keep the full sequence ready to go without needing extra back-pointers.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- Instead of just storing the length, I store the actual sequence in `d[i]` to save time on rebuilding the path later.
- The inner loop checks every previous element `j` to see if it can be a valid predecessor for index `i`.

## Common Mistakes

- Forgetting to initialize `dp` values to at least 1, since every single element is technically an increasing subsequence of length one.

## Walkthrough

For input [1, 5, 2], index 0 is [1] (len 1). Index 1 (5) sees 1<5, so it becomes [1, 5] (len 2). Index 2 (2) sees 1<2, so it updates to [1, 2] (len 2). The max length found is 2.
