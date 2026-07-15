# Explanation — 199. სეგმენტის შემობრუნება

## Approach

This problem is a basic string manipulation task where I just need to flip a specific part of the input. Since C++ strings use zero-based indexing, I first adjust the l and r input values by subtracting one. Then, I use a two-pointer approach, starting from the new l and r, swapping characters until the pointers meet in the middle. The rest of the string stays exactly where it was, so I just print the modified version.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Always subtract 1 from l and r to match C++ zero-based indexing
- Using two pointers is way cleaner than creating a temporary substring
- The swap function is perfect for reversing segments in-place

## Common Mistakes

- Forgetting to adjust 1-based indexing to 0-based
- Going out of bounds if the loop condition isn't set correctly

## Walkthrough

Read the string and indices, decrement indices, swap elements moving inwards until pointers cross, then output.
