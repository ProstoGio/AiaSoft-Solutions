# Explanation — 951. რიგები

## Approach

This is a classic division problem where you need to distribute N items into groups of size M. If N is perfectly divisible by M, the answer is just N/M. Otherwise, you'll have a remainder, which means you need one extra row to fit those last few people. I used an if-else block to handle that remainder case.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The ceiling of N divided by M is what matters here.
- Using long long is mandatory since N and M go up to 10^18.

## Common Mistakes

- Using int instead of long long, which causes overflow.
- Trying to simulate the rows with a loop, which will TLE.

## Walkthrough

Read the two numbers, check if n % m is zero. If yes, print n/m. If not, print (n/m) + 1.
