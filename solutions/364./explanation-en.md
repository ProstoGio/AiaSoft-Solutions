# Explanation — 364. ინიციალები

## Approach

This one is as straightforward as it gets. Since the problem guarantees two strings separated by a space, I just used standard input stream extraction to grab them into two variables. C++ handles whitespace-delimited reading automatically, which saved me from having to manually find the index of the space. From there, it's just picking the zero-th index of each string and appending the required period.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The cin operator stops at whitespace by default, making it perfect for capturing a name and surname without needing a full string search.
- Building the output strings is trivial because the indices of the first letters are always fixed.

## Common Mistakes

- Overcomplicating the solution by reading the whole line and searching for the space index manually instead of letting cin do the work.
