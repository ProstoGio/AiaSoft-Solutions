# Explanation — 747. გამყოფები - 4

## Approach

The problem asks us to count the divisors for every number in a range [a, b]. Since the upper bound is quite small (10^4), I just iterate through each number in the range. For each number, I check divisors by trial division up to its square root. If 'i' divides the number, then 'n/i' is also a divisor, so I count both while being careful not to double-count perfect squares.

## Complexity

| | |
|-|--|
| Time | O((b-a) * sqrt(b)) |
| Space | O(1) |

## Key Insights

- Iterating up to sqrt(n) is sufficient because divisors always come in pairs.
- Handle perfect squares correctly by checking if i*i == n to avoid counting the square root twice.

## Common Mistakes

- Forgetting to check the condition 'i*i != n', which leads to overcounting the square root.
- Starting the inner loop from 0, which would cause a division by zero error.

## Walkthrough

The outer loop goes from a to b. Inside, I initialize a counter and run a loop from 1 to sqrt(t). If t % i == 0, I add 1 for i. Then, I check if i*i != t; if true, I add another 1 for the corresponding divisor t/i. Finally, I just print the result and a space.
