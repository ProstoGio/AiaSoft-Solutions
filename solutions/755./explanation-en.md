# Explanation — 755. 2-ის ახარისხება

## Approach

This problem is a classic introduction to recursion. Since 2^n is just 2 multiplied by 2^(n-1), I defined a base case where 2^0 equals 1 and simply kept calling the function while decrementing n. It's not the most efficient way—bit shifting would be faster—but it's a great way to practice recursive logic. You basically keep diving deeper until you hit the base case, then bubble the values back up.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The base case is crucial; without it, the function will just keep recursing into negative numbers and eventually crash your stack.
- Every recursive step relies on the result of the previous one, building the final value like a chain reaction.

## Common Mistakes

- Forgetting the base case (n == 0), which leads to a stack overflow error.
