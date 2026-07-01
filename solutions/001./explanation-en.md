# Explanation — 001. ორი რიცხვის ჯამი

## Approach

This is as straightforward as it gets. You're just taking two integers from the input and adding them together. Since the constraints are up to 10⁹, a standard 32-bit integer handles the sum perfectly fine without worrying about overflow.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- No fancy algorithms here; basic arithmetic operations are constant time.
- Always double-check the variable limits to see if you need 'long long' instead of 'int'.

## Common Mistakes

- Using 'int' when the sum could potentially exceed 2*10⁹ and hit the 2.14*10⁹ limit.
