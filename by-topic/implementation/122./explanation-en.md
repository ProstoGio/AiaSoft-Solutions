# Explanation — 122. სტრიქონი

## Approach

Instead of using a standard loop to count the digits, I went with a recursive approach to make it a bit more interesting. The base case handles an empty string by returning zero. For every other step, I check if the first character is a digit using the built-in isdigit function, then call the same function on the remaining substring. It's essentially stripping the string down one character at a time until nothing is left.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n) |

## Key Insights

- The `x.erase(0, 1)` method is what drives the complexity here, as it creates a new copy of the string in each recursion level.
- You could easily do this with a simple loop, but recursion feels cleaner if you want to practice breaking problems down into sub-parts.

## Common Mistakes

- Forgetting the base case, which leads to a stack overflow since the recursion would never terminate.
