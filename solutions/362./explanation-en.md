# Explanation — 362. მკაცრი ლუწი რიცხვი

## Approach

The core idea here is to peel the number apart digit by digit from right to left using the modulo operator. Every time I grab the last digit with n % 10, I check if it's odd. If I find even a single odd digit, I bail out immediately because the number fails the 'strict' condition. If I make it through the whole loop without hitting that return, then every digit must be even.

## Complexity

| | |
|-|--|
| Time | O(log n) |
| Space | O(1) |

## Key Insights

- The modulo operator % 10 is the easiest way to inspect the last digit of an integer.
- Early exiting the function as soon as you find an odd digit is much faster than checking the whole number if you hit a failure case quickly.

## Common Mistakes

- Checking the parity of the whole number n instead of checking individual digits.
