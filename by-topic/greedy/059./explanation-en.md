# Explanation — 059. კბილის ექიმი

## Approach

The problem is essentially a simple simulation of a queue. Since the doctor treats patients in the order they arrive, we first need to sort them by their arrival time. Once they are sorted, we track the `exitT` variable, which represents the exact time the doctor finishes treating the current patient. For each person, if they arrive before the doctor is free, they start at `exitT`; otherwise, they start whenever they arrive.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n) |

## Key Insights

- Sorting is the main hurdle here, even a simple Bubble Sort works fine since N is small (721).
- The finish time of one patient acts as the starting point for the next, unless the next patient arrives late, in which case the doctor's 'clock' resets to their arrival time.

## Common Mistakes

- Forgetting that if the doctor is idle, the current patient starts exactly when they arrive, not when the previous one finished.
