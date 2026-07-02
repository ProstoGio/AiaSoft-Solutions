# Explanation — 146. სამკუთხედის ფართობი (გვერდებით)

## Approach

This one is basically geometry 101. Before you jump into calculating the area, you have to verify if the three sides can actually form a triangle using the triangle inequality theorem: the sum of any two sides must be strictly greater than the third one. If that passes, Heron’s formula is your best friend for calculating the area when you only know the side lengths. I used a struct to keep everything organized because it just feels cleaner than dumping variables everywhere in main.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The triangle inequality (a+b>c, a+c>b, b+c>a) is non-negotiable; if these don't hold, the area doesn't exist.
- Heron's formula is the standard way to go here: sqrt(s * (s-a) * (s-b) * (s-c)), where s is the semi-perimeter.

## Common Mistakes

- Forgetting to output exactly 5 decimal places, which can lead to presentation errors on the judge.
- Using integers for the semi-perimeter calculation, which causes truncation before the square root.
