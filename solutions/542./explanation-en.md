# Explanation — 542. ჯადოქარი ბიტუნა

## Approach

Calculating XOR sum from 1 to N is a classic pattern that repeats every four numbers. If you look at the sequence of XOR sums, you'll see a cycle: N, 1, N+1, 0. Since N can be as large as 10^35, we can't use standard integers; I read it as a string to bypass overflow issues. The logic just pulls the last two digits of that string to check the remainder modulo 4 and picks the corresponding outcome.

## Complexity

| | |
|-|--|
| Time | O(log N) |
| Space | O(log N) |

## Key Insights

- The XOR sum sequence for 1, 2, 3, 4, 5... is N, 1, N+1, 0 repeating in a 4-cycle.
- Reading N as a string lets us handle inputs way larger than unsigned long long without needing BigInt libraries.

## Common Mistakes

- Trying to use standard integer types, which will immediately overflow given the 10^35 constraint.

## Walkthrough

For N=5: we take 5 mod 4 which is 1. According to the cycle, the result is 1. For N=6: 6 mod 4 is 2, so the output is N+1, which is 7.
