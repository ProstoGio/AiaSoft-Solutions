# Explanation — 333. გამყოფები 2

## Approach

The most straightforward way to solve this is to just check every single number from 1 up to N. If N divided by p leaves no remainder, then p is definitely a divisor. I just keep a running total in a variable and add these divisors as I find them. It's not the fastest way to handle large inputs near 10^9, but for this specific version, it works fine.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- A simple loop from 1 to N is enough because divisors occur in pairs, but brute-forcing the whole range works for this constraint.
- Using a long long for the sum variable is safer if N gets really big, though int fits for 10^9 in some cases.

## Common Mistakes

- Forgetting to initialize the accumulator variable k to 0.

## Walkthrough

For N=6: p=1 (6%1==0, k=1), p=2 (6%2==0, k=3), p=3 (6%3==0, k=6), p=4 (6%4!=0), p=5 (6%5!=0), p=6 (6%6==0, k=12). The final sum is 12.
