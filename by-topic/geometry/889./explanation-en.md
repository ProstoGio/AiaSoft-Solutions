# Explanation — 889. πთაგორას სამკუთხედი

## Approach

Since we don't know if the given numbers are two legs or a leg and the hypotenuse, I check both possibilities. I calculate the potential missing side using either Pythagoras' a² + b² = c² or c² - a² = b². Since standard sqrt functions might have precision issues with numbers near 10⁹, I calculate the root and check a small range around it to guarantee correctness.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Input numbers can be either (leg, leg) or (leg, hypotenuse).
- Using unsigned long long avoids overflow for squares up to 10¹⁸.
- Checking a small range around sqrt prevents float precision errors.

## Common Mistakes

- Forgetting that the larger number could be the hypotenuse.
- Assuming sqrt returns a perfect integer without rounding issues.

## Walkthrough

I read two numbers and sort them as k (larger) and j (smaller). First, I treat k as the hypotenuse and check if k² - j² is a perfect square. If not, I assume both are legs and check if k² + j² is a perfect square. The loop around the root handles any tiny precision inaccuracies from sqrtl.
