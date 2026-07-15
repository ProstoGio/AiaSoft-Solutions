# Explanation — 407. თოვლის ბაბუა და საჩუქრები

## Approach

This problem is basically checking if N is perfectly divisible by M. If Santa has N gifts and M kids, he can distribute them equally only if the remainder of N divided by M is zero. That's why I used the modulo operator. It's a direct check with no need for loops or complex logic.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The modulo operator (%) is perfect here to check divisibility without any iteration.
- If N % M equals 0, there is no remainder, meaning everyone gets the exact same amount.

## Common Mistakes

- Trying to use a loop to subtract gifts one by one, which is unnecessary and inefficient.
- Forgetting to check the condition N % M == 0 and printing the wrong output format.

## Walkthrough

Read N and M from input, use an if-statement to check if N % M == 0. Print 'YES' if true, otherwise print 'NO'. That's it.
