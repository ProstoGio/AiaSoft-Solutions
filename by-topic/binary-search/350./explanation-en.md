# Explanation — 350. იძებნება თუ არა?

## Approach

This is a classic search task, and while a simple linear scan works perfectly fine here, I went with binary search to practice the logic. First, you have to sort the array; otherwise, binary search is useless. Once it's sorted, the algorithm repeatedly halves the search space by checking the middle element. It's a clean way to handle things, especially if the array were much larger than 100 elements.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- Binary search only works on sorted data, so the sort() call is non-negotiable.
- By narrowing the range to l=m+1 or r=m, we converge on the target very quickly.

## Common Mistakes

- Forgetting to sort the array before starting the binary search.
