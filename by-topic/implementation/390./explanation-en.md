# Explanation — 390. ნაკლული და ნამეტი რიცხვები

## Approach

The core of the problem is simply finding all proper divisors and checking their sum. Since the input constraint goes up to 10⁵, a simple linear loop up to n/2 is perfectly fast enough. I just track the running sum of all numbers that divide n evenly, then perform a quick comparison against the original number to print the right label.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- A proper divisor can never be larger than n/2, which is why the loop condition p <= x/2 works perfectly.
- The special case where the sum equals the number (like 6) is handled by the 'none' condition, just as the problem specifies.

## Common Mistakes

- Starting the divisor loop from 0, which would cause a division by zero error.
