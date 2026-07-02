# Explanation — 620. მშვიდი მიმდევრობა

## Approach

This is a classic Fibonacci variation. If you look at the last digit, you can either place a 0 or a 1. If you place a 0, the previous n-1 sequence could have been anything. If you place a 1, the digit before it MUST be a 0, which anchors you to the n-2 state. This recursion leads directly to the standard Fibonacci recurrence relation.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The sequence follows the Fibonacci recurrence because every valid n-length sequence ends in either 0 (preceded by any valid n-1 sequence) or 01 (preceded by any valid n-2 sequence).
- For n=1, we have {0, 1}, giving 2 sequences; for n=2, we have {00, 01, 10}, giving 3.

## Common Mistakes

- Forgetting to handle the base cases n=1 and n=2 correctly, which shifts the entire sequence.

## Walkthrough

For n=3: We can end in 0 (sequences 000, 010, 100) or 01 (sequences 001, 101). That's 3 + 2 = 5 total. Notice 5 is just d[1] + d[2].
