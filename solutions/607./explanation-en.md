# Explanation — 607. რიცხვების XOR - 1

## Approach

Since the constraint is only 10⁵, a simple linear loop is perfectly fine here. I just initialize a variable with 1 and iterate from 2 up to N, XORing each number into the running total. The bitwise XOR operator in C++ makes this incredibly straightforward. No need for complex math patterns if the brute force is fast enough for the judge.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- For N=10⁵, an O(n) loop finishes in a fraction of a millisecond.
- XOR is associative, so the order of operations doesn't change the result.

## Common Mistakes

- Forgetting to initialize the answer to 1 (or starting the loop from 0 and messing up the initial XOR).
