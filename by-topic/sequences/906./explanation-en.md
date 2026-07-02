# Explanation — 906. ფიფქების სამკუთხედი -1

## Approach

This one is basically a classic nested loop exercise. Since the requirement is a triangle with the base at the top shrinking down to one star, you just need an outer loop to track the current row and an inner loop that controls how many stars to print. The trick is to start your inner loop at n and decrement it until it hits the current row index. It's cleaner than dealing with extra spaces or complex math.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(1) |

## Key Insights

- The outer loop defines the row number, while the inner loop handles the decreasing count of asterisks.
- By setting the inner loop to run from n down to i, you naturally get the decreasing pattern without any complicated logic.

## Common Mistakes

- Mixing up the inner loop condition, which results in the wrong number of stars or an infinite loop if you aren't careful with the increment/decrement operators.
