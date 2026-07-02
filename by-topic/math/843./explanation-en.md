# Explanation — 843. ევკლიდური საბავშვო ბაღი

## Approach

This problem sounds like a complex number theory puzzle, but it’s actually a classic case of overthinking. Since the candy amounts for each of the n days are consecutive integers and each must be divisible by the number of kids (let's call it k), we need k to divide both a and a+1. If k divides two consecutive integers, it must divide their difference, which is 1. That leaves us with the only logical conclusion that k must be 1, unless the sequence only consists of one day, in which case the answer is just a itself.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- If x divides n and x divides n+1, then x must divide (n+1) - n = 1.
- For n > 1, the consecutive numbers force the common divisor to be 1.

## Common Mistakes

- Trying to implement big integer arithmetic because of the constraints on a, which is unnecessary here.

## Walkthrough

If a=10 and n=3, the quantities are 10, 11, 12. The only number dividing all three is 1. If n=1, the quantities are just 10, so the max kids is 10.
