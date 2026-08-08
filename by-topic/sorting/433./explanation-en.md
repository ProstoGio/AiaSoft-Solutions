# Explanation — 433. უცნაური დოღი

## Approach

To solve this, I stored each horse's speed alongside its original index using a pair. After reading the input, I sorted these pairs based on speed in ascending order. Since the fastest horse is at the end, the second fastest one is simply the second-to-last element. I then just print the stored index of that specific element.

## Complexity

| | |
|-|--|
| Time | O(N log N) |
| Space | O(N) |

## Key Insights

- Using a pair allows us to keep track of the original index even after sorting the speeds.
- Sorting is the easiest way to find rank-based elements.

## Common Mistakes

- Forgetting to store the original index and losing track of which horse is which after sorting.
- Mixing up the indices, like accessing n-1 instead of n-2.

## Walkthrough

Read N, create a vector of pairs, fill it with (speed, index), sort the whole vector, output the index of the second-to-last pair.
