# Explanation — 789. ლუწი მასივი

## Approach

This one is as straightforward as it gets. I just read the numbers into an array, iterate through them, and check if each element is odd using the modulo operator. If it's odd, I just add one to turn it into an even number. That's all there is to it, really.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The modulo operator (%) is your best friend here; checking if a number is odd is just a quick 'a[i] % 2 != 0'.
- Since we only need to update odd numbers, we can process the logic in a separate pass or even right after reading input.

## Common Mistakes

- Confusing the condition for odd numbers and accidentally modifying even numbers instead.
