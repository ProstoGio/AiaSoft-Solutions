# Explanation — 533. უახლოესი ჯერადი

## Approach

This problem is all about finding the closest multiple of b to our number a. If a is already divisible by b, the answer is zero. Otherwise, the nearest multiple of b must be either the one just below a or the one just above it. I calculate the lower multiple by using integer division (a/b)*b and the upper one by simply adding b to that result. The answer is just the minimum absolute difference between a and these two candidates.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- The closest multiple is either floor(a/b)*b or ceil(a/b)*b.
- Using long long is non-negotiable since inputs reach 10^16.

## Common Mistakes

- Forgetting to handle the case where a is already a multiple of b.
- Using int instead of long long, causing overflow.

## Walkthrough

Read n, then loop through each pair. For each a and b, compute c1 = (a/b)*b. This gives the largest multiple less than or equal to a. The next multiple, c2, is just c1 + b. Compare |a-c1| and |a-c2| and print the smaller one.
