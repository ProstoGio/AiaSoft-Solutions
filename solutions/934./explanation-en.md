# Explanation — 934. დიდი რიცხვები

## Approach

At first glance, you might think you need to construct these massive numbers, but that's a trap. A number consisting of N digits, all equal to D, can be written as D * (10^N - 1) / 9. Finding the GCD of two such numbers boils down to finding the GCD of the 'repunit' lengths N and M. Once you calculate GCD(N, M), you know the resulting number is just the digit D repeated that many times. Since the output requirement is specifically capped at the last 10^6 digits, the logic simplifies to just printing the digit D either 10^6 times or GCD(N, M) times.

## Complexity

| | |
|-|--|
| Time | O(log(min(N, M))) |
| Space | O(1) |

## Key Insights

- The GCD of two repunits made of the same digit D is a repunit of length GCD(N, M) times the constant factor resulting from the number base math.
- Because we only need to output at most 10^6 digits, we don't actually care about the full value of the resulting number, just its length.

## Common Mistakes

- Trying to actually store or construct the full numbers using strings or big integers, which will immediately lead to memory limit exceeded errors.

## Walkthrough

If N=6 and M=4 with D=3, we compute GCD(6, 4) = 2. The result is '33', which is 2 digits long. Since 2 < 10^6, we just output two 3s.
