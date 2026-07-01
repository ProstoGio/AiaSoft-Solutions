# Explanation — 058. ფხაჭუნა კატები

## Approach

The problem gives us a flat list of apartments, but it's really just a grid disguised as a 1D array. Since apartment x is always below x + m, I just store all cat counts in an array and iterate through it until the second-to-last row. For every apartment, I look exactly m positions ahead in the array to compare the current cat count with the one directly above it. If that count is more than double my own, the neighbor gets fined and I bump up the total.

## Complexity

| | |
|-|--|
| Time | O(n * m) |
| Space | O(n * m) |

## Key Insights

- Don't let the 1D input format fool you; the index difference m perfectly maps the floor below to the floor above.
- The core condition is just a simple p > 2q check inside the loop.

## Common Mistakes

- Going out of bounds by trying to check the very top row for neighbors above them.
- Using the wrong indexing logic by not accounting for the total apartment count correctly.
