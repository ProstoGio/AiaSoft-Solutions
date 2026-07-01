# Explanation — 608. რიცხვების XOR - 2

## Approach

If you try to loop through the numbers, you'll hit a TLE immediately because N goes up to 10^18. I realized there’s a distinct pattern when you look at the XOR sums for small values of N. Writing out the first few results reveals a cycle of length 4. Once you map that sequence—n, 1, n+1, 0—the code becomes trivial.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The sequence of prefix XORs repeats every 4 numbers: N mod 4 tells you exactly where you are in the cycle.
- The results follow the pattern: 0 -> 0, 1 -> 1, 2 -> N+1, 3 -> 0, 4 -> N, and so on.

## Common Mistakes

- Trying to use a loop instead of the O(1) mathematical pattern.

## Walkthrough

For N=5: 5 mod 4 = 1, so the result is 1. Checking it manually: 1^2=3, 3^3=0, 0^4=4, 4^5=1. Matches perfectly.
