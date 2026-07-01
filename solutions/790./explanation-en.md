# Explanation — 790. ბევრად ბევრი

## Approach

This one is basically just a nested loop job. You need to print each number 'i' exactly 'i' times, so the outer loop handles the number itself while the inner loop just blasts that number out to the console. It's a classic brute-force implementation where you don't really need to worry about performance given N is only up to 100. Honestly, keep it simple and don't overthink the logic.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(1) |

## Key Insights

- The outer loop iterates through the values, and the inner loop acts as a counter to repeat the current value.
- Since N is tiny (max 100), an O(n²) approach is perfectly fine and runs instantly.

## Common Mistakes

- Forgetting to output the space between numbers, which makes the grader fail to parse the output.
