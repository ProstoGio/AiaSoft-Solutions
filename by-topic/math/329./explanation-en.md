# Explanation — 329. კენტი რიცხვები 2

## Approach

The task asks us to print odd numbers backwards from N down to 1. The simplest way to handle this is a basic loop that starts at N and decrements by one each time. Inside the loop, a quick modulo check tells us if the number is odd. Since we only care about odds, we just print the value if `i % 2` isn't zero.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- The modulo operator is the standard way to check for oddness, which works perfectly even if N starts as an even number.
- Starting the loop at N and moving downwards handles the descending order requirement automatically.

## Common Mistakes

- Forgetting that 1 is included in the output range, which leads to `while(i > 1)` bugs.
