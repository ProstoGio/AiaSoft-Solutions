# Explanation — 576. ლუწი ინდექსები

## Approach

This one is basically as straightforward as it gets. You just read the size of the array, grab the elements into a vector or a static array, and then filter based on the index parity. Since array indexing starts at zero in C++, index 0 is even, index 1 is odd, and so on. A simple loop with a modulo operator is the easiest way to pick out the elements at even indices.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Remember that index 0 is considered even in C++ sequence logic.
- You don't technically need an array if you just want to print on the fly, but storing it is cleaner when the size is small.

## Common Mistakes

- Confusing the 1-based indexing we use in math with the 0-based indexing C++ actually uses.
