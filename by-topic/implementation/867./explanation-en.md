# Explanation — 867. დაბეჭდე კენტები

## Approach

This one is as straightforward as it gets. Instead of storing everything in an array and then iterating again, I just check the parity of each number as I read it from the input stream. If a number is odd, I print it immediately with a space. This way, I don't waste memory on an array I don't really need.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- You don't need to store the numbers in an array at all since the problem only asks you to print them in the order they arrive.
- The modulo operator '%' is the standard way to check for odd numbers by seeing if the remainder when dividing by 2 is non-zero.

## Common Mistakes

- Over-complicating it by declaring an array of size 100 when you can just process the input on the fly.
