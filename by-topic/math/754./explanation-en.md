# Explanation — 754. ფაქტორიალი

## Approach

Since the constraint on N is tiny (up to 15), recursion is a very clean way to handle this. The mathematical definition of a factorial is just n multiplied by (n-1)!, which maps perfectly to a recursive function. I used a base case of 0 returning 1 because it simplifies the logic significantly when the function hits the end. It’s essentially just a stack of multiplications waiting to resolve once the bottom is reached.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Factorials grow incredibly fast, but since N <= 15, a long long is more than enough to store the result without overflow.
- Using 0 as the base case is a neat trick to ensure the recursion terminates correctly.

## Common Mistakes

- Forgetting to handle the base case correctly, which leads to infinite recursion and a stack overflow.
