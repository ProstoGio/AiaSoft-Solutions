# Explanation — 475. ორის ხარისხების ჯამი

## Approach

At first glance, you might think about adding these numbers directly, but that's impossible given the massive exponents. Instead, treat the sum of powers of two like binary arithmetic. Each input ai corresponds to the i-th bit in a binary number being set to 1. Since multiple inputs can have the same exponent, we handle carrying just like elementary addition: if two 2^i terms exist, they combine to form 2^(i+1).

## Complexity

| | |
|-|--|
| Time | O(N + max(ai)) |
| Space | O(max(ai)) |

## Key Insights

- The frequency array acts as a bucket where each index stores the count of 2^i terms.
- The carry operation follows the simple rule freq[i+1] += freq[i] / 2, which ripples the binary representation upwards until no position has more than one unit.

## Common Mistakes

- Trying to use BigInt libraries or standard integer types, which will overflow instantly.
- Forgetting to handle the carry process beyond the initial input range (the carry can extend the number length).

## Walkthrough

If input is 2, 0, 0: freq[0]=2, freq[2]=1. Processing index 0: freq[0]/2 = 1, so carry 1 to freq[1]. Now freq[0]=0, freq[1]=1, freq[2]=1. The binary becomes '110', which is 2^2 + 2^1 = 6.
