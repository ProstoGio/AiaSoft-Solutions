# Explanation — 429. სამი ფერის ბურთულა

## Approach

This is a classic worst-case scenario problem. To guarantee you get a red ball, you have to imagine the unluckiest possible sequence of draws. You could end up picking every single white and black ball before finally grabbing a red one. Therefore, you add the count of non-red balls together and then add one more for the guaranteed red ball. The logic is simple: sum of white and black balls plus one.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Always assume the worst-case scenario where you pick all other colors first.

## Common Mistakes

- Forgetting to add 1 at the end.
- Including the number of red balls in the calculation.

## Walkthrough

The program reads A (red), B (white), and C (black). Since we only care about getting one red ball, we treat B and C as 'bad' draws. By calculating B + C + 1, we cover the worst-case scenario where every single non-red ball is pulled first. The next ball drawn after that is mathematically guaranteed to be red.
