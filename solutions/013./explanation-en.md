# Explanation — 013. მოქმედებები ვექტორზე

## Approach

This problem is basically just a wrapper around the standard library's std::vector methods. Since the constraints are tiny—only 100 operations—I didn't need to worry about efficiency or fancy data structures. I just read the command strings, triggered the corresponding vector method, and handled the 1-based indexing carefully. The built-in .insert() and .erase() functions handle all the heavy lifting of shifting elements, which is perfect for this scope.

## Complexity

| | |
|-|--|
| Time | O(Q * N) |
| Space | O(N) |

## Key Insights

- The input uses 1-based indexing, so remember to subtract 1 when converting to the 0-based indexing used by C++ iterators.
- The erase range in std::vector is [first, last), meaning the second iterator is exclusive, which matches the problem's [p1, p2] requirement if you adjust correctly.

## Common Mistakes

- Off-by-one errors when converting the problem's 1-based position to a vector iterator.
