# Explanation — 622. სანაყინე

## Approach

The core of the problem is to find two non-negative integers x and y such that 3x + 5y = N. Since we only need one valid pair, I didn't bother with advanced math like Diophantine equations. Instead, I just brute-forced it by testing possible counts of the 5-lari ice cream. I start with the maximum possible amount of 5-lari ice creams and decrease that count until the remaining money is perfectly divisible by 3.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- You don't need a fancy algorithm here; iterating downwards from the maximum possible 5s is plenty fast given the constraints.
- Once you subtract some multiple of 5, the remainder must be exactly divisible by 3 for a valid solution to exist.

## Common Mistakes

- Trying to solve it with a complex formula instead of a simple loop, or forgetting to check if the remainder is divisible by 3.
