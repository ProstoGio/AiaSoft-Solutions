# Explanation — 868. დაბეჭდე ლუწები

## Approach

This one is as straightforward as it gets. You just read the size of the array, grab the elements one by one, and check if each number is divisible by two using the modulo operator. If the remainder is zero, you print it immediately with a trailing space. No need to store these in a new vector or do anything fancy since we just need to spit them out in the original order.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The modulo operator `a[i] % 2 == 0` is your best friend here for checking parity.
- Since the output order matches the input, you don't even need extra memory; you could technically just process numbers as you read them without the array.

## Common Mistakes

- Forgetting the space after the number in the output, which might fail some strict checkers.
