# Explanation — 208. სამკუთხა რიცხვები

## Approach

This problem asks for the n-th triangular number, which is essentially the sum of all integers from 1 to n. The mathematical formula for this is n*(n+1)/2. Since n can be as large as 5*10^9, n*(n+1) will exceed the capacity of a standard 64-bit integer. I used __int128 to handle the intermediate multiplication safely before dividing by two. This approach runs in constant time, making it extremely efficient for the given constraints.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The n-th triangular number is the arithmetic series sum formula: n(n+1)/2.
- A 64-bit unsigned long long overflows if n is around 5*10^9 because n squared hits 2.5*10^19, while the limit is ~1.8*10^19.
- __int128 is a GCC extension that perfectly handles the temporary overflow before the division.

## Common Mistakes

- Using standard 'long long' without considering that n*(n+1) can exceed 2^64-1.
- Trying to use a loop to sum numbers, which would TLE instantly for large n.

## Walkthrough

I read n into an unsigned long long variable. To avoid overflow during the multiplication (n * (n+1)), I cast n to __int128. After multiplying, I divide by two and output the result. It's a direct, one-line math solution.
