# Explanation — 315. ირაკლი და მიმდევრობა

## Approach

This one is basically a classic recurrence relation hidden in a sequence problem. If you look at the valid strings of length N, you can finish them either with a 0, a 01, or a 011. Anything else would break our 'no three consecutive ones' rule. Once you realize this, the pattern becomes clear: to get to position N, you add the counts of valid sequences ending at N-1, N-2, and N-3. It’s essentially a generalized Fibonacci sequence.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- If you end with 0, you append it to any valid sequence of length N-1.
- If you end with 01, you append it to any valid sequence of length N-2.
- If you end with 011, you append it to any valid sequence of length N-3.

## Common Mistakes

- Starting the DP base cases incorrectly or messing up the small N values like N=1, 2, or 3.

## Walkthrough

For N=3, the valid sequences are 000, 001, 010, 100, 101, 110, 011 (total 7). For N=4, you take valid strings of length 3 (end in 0), length 2 (end in 01), and length 1 (end in 011) to build up the result.
