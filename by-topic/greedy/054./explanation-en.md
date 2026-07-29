# Explanation — 054. მონეტები

## Approach

To get the minimum number of coins, the logic is pretty straightforward: you want to use the largest denomination available (n) as much as possible. If S is less than or equal to n, you just take one coin of value S. For larger amounts, you divide S by n to see how many full n-value coins fit in, then check if there is a remainder. If there is a remainder, you add exactly one more coin to cover the leftover sum, since any remainder will always be less than n.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Greedy approach works perfectly here because denominations are 1 to n.
- The result is simply ceil(S / n).

## Common Mistakes

- Forgetting to handle the case where S is perfectly divisible by n.
- Using unnecessary loops instead of basic division.

## Walkthrough

The code first checks if S <= n. If it is, the answer is just 1. If not, it uses integer division `s/n` to get the count. If `s%n` isn't zero, it increments the result by 1 because that leftover amount still needs a coin.
