# Explanation — 788. ვინ დგას შუაში?

## Approach

This one is pretty straightforward. You just need to check the parity of the array length using the modulo operator. If n is odd, the middle element sits exactly at index n/2. If n is even, you're looking for the two elements flanking the middle, which are at indices n/2-1 and n/2.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Integer division in C++ works in our favor here since n/2 automatically rounds down.
- You don't actually need to iterate through the whole array to find the center once you know the indices.

## Common Mistakes

- Mixing up the array indices by using n/2 for both odd and even cases without adjusting for the zero-based indexing.
