# Explanation — 440. მასივი 1

## Approach

This problem asks us to reverse an array and print elements at odd indices. I read the input into a vector and use a simple two-pointer swap approach to reverse it in-place. After the array is reversed, I just iterate through it once more. Using the modulo operator, I filter out indices that aren't odd and print the matching elements.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- Reversing an array can be done efficiently with two pointers swapping elements until they meet in the middle.
- Index parity checking relies on the index%2 condition.

## Common Mistakes

- Forgetting that array indexing starts at 0, meaning index 1 is technically the second element.
- Off-by-one errors when reversing the sequence.

## Walkthrough

I store the numbers in a vector, swap elements from both ends moving towards the center, then loop through and print a[i] whenever i is odd.
