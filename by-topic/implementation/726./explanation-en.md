# Explanation — 726. მრავალჯერადი ფაქტორიალი

## Approach

Since the problem asks for the last digit of a multi-factorial, I realized that factorials grow massive very quickly. For any factorial larger than 4!, the result will always end in zero because it contains both 2 and 5 as factors. I parsed the input to separate the number n and the count of exclamation marks k. Then, I simulated the process for small numbers and just output 0 for everything that results in a value large enough to contain a multiple of 10.

## Complexity

| | |
|-|--|
| Time | O(N + K) |
| Space | O(N) |

## Key Insights

- n! for n >= 5 always ends in 0.
- ((n!)!)! grows so fast that if n >= 3 and k > 1, the result is guaranteed to end in 0.
- 0! and 1! are special cases equal to 1.

## Common Mistakes

- Trying to actually compute the factorial value, which will overflow any data type.
- Forgetting the base cases where n=0 or n=1.

## Walkthrough

First, I split the string to isolate the integer part and the '!' count. My logic checks small values of n manually. If n is 0 or 1, the answer is 1. If n=2, I output 2. For n=3 and n=4, the last digit depends on the number of exclamation marks. If k is greater than 1 for n=3 or n=4, the factorial quickly becomes large enough to hit a multiple of 10, resulting in 0.
