# Explanation — 942. რა დარჩება?

## Approach

This problem is all about parity invariants. If you take two numbers, a and b, the absolute difference |a - b| has the same parity as their sum (a + b). Since the operation replaces two numbers with their difference, it's equivalent to saying the parity of the final result depends only on the parity of the sum of all initial elements. You just need to count how many odd numbers are in the array.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- The parity of |a - b| is the same as (a + b) mod 2.
- The order of operations doesn't change the final parity of the sum.
- If the count of odd numbers is odd, the final result is odd; otherwise, it's even.

## Common Mistakes

- Overthinking the absolute difference rule.
- Trying to simulate the process, which is unnecessary and potentially slow.

## Walkthrough

The code reads the input and counts how many odd numbers are present. Because adding two numbers or subtracting them doesn't change their sum's parity (modulo 2), we just check if the total count of odd numbers is odd or even. No need for complex logic, just simple parity math.
