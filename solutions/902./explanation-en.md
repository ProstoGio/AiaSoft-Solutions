# Explanation — 902. ერთის გამოკლება

## Approach

Since the input can reach 10^1000, standard integers will overflow immediately. We have to treat the number as a string and perform school-method subtraction manually. I aligned the number '1' to the end of the input string and processed it column by column, keeping track of the borrow state. Handling leading zeros at the end is crucial to ensure the output remains clean, especially for cases like 100 becoming 99.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Using a string allows handling arbitrarily large inputs that don't fit in long long.
- The 'borrow' logic (re) needs to be propagated from the last digit all the way to the front until it resets to zero.

## Common Mistakes

- Forgetting to handle leading zeros after the subtraction, which would turn '100' into '099' instead of '99'.
