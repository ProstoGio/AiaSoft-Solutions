# Explanation — 330. კენტი რიცხვები 3

## Approach

The input gives me two numbers, but they aren't guaranteed to be in order, so I start by checking if 'a' is larger than 'b' and swapping them if needed. This keeps my logic simple. I then check if the starting number is odd—if it is, I print it and increment by one to normalize my loop. From there, it's just a simple while loop that jumps by two, grabbing every odd number until I hit the upper bound.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- Always normalize the range with a swap first so you don't have to write two separate loops for different orders.
- Handling the first odd number explicitly simplifies the condition inside the loop.

## Common Mistakes

- Forgetting that the input 'a' and 'b' could be provided in reverse order.
