# Explanation — 458. პასკალის სამკუთხედი

## Approach

This is a classic dynamic programming problem where each number is just the sum of the two directly above it. Instead of overcomplicating things with combinatorics, I set up a 2D array and filled the boundaries with ones. The nested loops handle the state transitions naturally. I found that padding the array to size N+1 makes the indices play nicer so you don't run into annoying boundary conditions at the start of each row.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- The value at any position (i, j) is simply the sum of (i-1, j) and (i-1, j-1) from the previous row.
- Padding the array with an extra index prevents those pesky index-out-of-bounds errors when you hit the edges.

## Common Mistakes

- Trying to calculate values using factorials can lead to integer overflow very quickly as N grows.
