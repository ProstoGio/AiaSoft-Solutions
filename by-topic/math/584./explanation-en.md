# Explanation — 584. ვაშლები (მარტივი)

## Approach

The goal is to find the maximum number of students who can each receive at least two apples so that no apples are left over. Since we need to distribute N apples equally, the number of students must be a divisor of N. Specifically, if we pick K students, each gets N/K apples, and the problem requires N/K > 1, meaning K must be less than N/2. My code simply checks the smallest possible prime factors to find the largest possible divisor that satisfies the condition.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The constraint is that each person gets > 1 apple, which simplifies to finding the largest divisor of N that is not N itself.
- If N is prime, the only way to divide the apples is to give them to one person, but the logic handles cases based on divisibility.

## Common Mistakes

- Forgetting to handle the edge case where N=1.
- Trying to use complex loops when simple conditional checks work for N <= 100.

## Walkthrough

I read N, and if it's 1, I print 0 because you can't give more than one apple to anyone. Then I check for divisibility by 2, 3, 5, and 7 to find the largest possible denominator. If none of those work, I output 1, because that's the only remaining option for a prime number that isn't divisible by those small primes.
