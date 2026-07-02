# Explanation — 126. ფიბონაჩის მიმდევრობა 1

## Approach

This is a textbook example of dynamic programming, specifically memoization. If you try to calculate Fibonacci numbers using plain recursion, the number of redundant function calls explodes exponentially. To fix this, I used a global array to store the result of each calculation the first time it hits. This way, any subsequent call for the same index just returns the precomputed value instead of re-calculating everything.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Using a long long is non-negotiable here because Fibonacci numbers grow incredibly fast and will definitely overflow a standard 32-bit int before you hit n=90.
- The memoization array serves as a shortcut; once you've computed a value, you never do that work again.

## Common Mistakes

- Forgetting to use long long and getting wrong answers for inputs larger than 45.
- Re-calculating the entire tree instead of caching the results, which leads to a Time Limit Exceeded error.
