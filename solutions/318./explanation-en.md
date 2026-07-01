# Explanation — 318. კეთილი ფერია

## Approach

Since we need the largest five-digit number with a specific digit sum, the easiest way is to just start from the biggest possible number, 99999, and go backwards. I wrote a simple loop that decrements until it hits the first number whose digits add up to N. Because the constraints on N are small, this brute-force approach finishes instantly. It’s definitely not the most 'mathematical' way, but for a 5-digit range, it's efficient enough to pass well within the time limit.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The search space for five-digit numbers is tiny, so there's no need for fancy digit DP or greedy math construction.
- Starting from the maximum (99999) and going down guarantees that the first match we find is the largest one.

## Common Mistakes

- Trying to solve it with nested loops or complicated digit extraction math when a simple range check works perfectly.
