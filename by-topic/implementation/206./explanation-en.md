# Explanation — 206. კენტები ლუწების წინააღმდეგ

## Approach

Since the input can reach 10^100, we can't store it as an integer type, so reading it as a string is the only way to go. We just iterate through every character, convert the ASCII char to a digit by subtracting '0', and check if it's even or odd using the modulo operator. Simple counters for even and odd digits tell us who won. It's really just a basic counting game once you realize the input size is just a hint to use strings.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Always check the input constraints first; if N is 10^100, it's a string, not an integer.
- The 's[i] - '0'' trick is the standard way to turn a char digit into an actual integer.

## Common Mistakes

- Trying to use 'long long' or other integer types instead of string, which will cause overflow.
