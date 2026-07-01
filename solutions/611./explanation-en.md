# Explanation — 611. XOR ოპერაცია

## Approach

The XOR sum of a sequence equals 1 if and only if the sequence contains an odd number of 1s. Since each position can be either 0 or 1, we are essentially looking for the sum of combinations: how many ways can we choose an odd number of slots to place a 1 in a sequence of length N? Pascal’s triangle is the easiest way to generate these combinations without worrying about complex math formulas. We calculate the binomial coefficients and then just sum up the entries for rows where the count of 1s is odd.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- XOR is essentially addition modulo 2, so the result is 1 if there's an odd number of set bits.
- The sum of all odd-indexed binomial coefficients for any row n is exactly 2^(n-1).

## Common Mistakes

- Forgetting to check the parity of the number of 1s and accidentally including even counts.
