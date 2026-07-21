# Explanation — 251. მასივის სეგმენტის შემობრუნება - 1

## Approach

To reverse the segment, I used the two-pointer technique. I converted the 1-based indexing from the problem to 0-based for the vector. By placing one pointer at the start index and another at the end, I simply swapped the elements and moved the pointers toward the center. This continues until the pointers meet or cross, effectively flipping the sub-array.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- Always adjust indices by subtracting 1 because C++ vectors are 0-indexed.
- The swap function is the cleanest way to exchange values without a temporary variable.
- The while loop condition 'l <= r' handles both even and odd length segments perfectly.

## Common Mistakes

- Forgetting to decrement a and b, which leads to out-of-bounds errors.
- Swapping too many times by using the wrong loop condition.

## Walkthrough

Read the array size and elements first. Then, read the start and end indices. Convert those indices to 0-based by subtracting 1. Run a loop that swaps elements at the left and right pointers while incrementing left and decrementing right. Finally, print the entire modified vector.
