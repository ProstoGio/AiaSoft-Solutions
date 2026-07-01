# Explanation — 627. ნიკოს მიმდევრობა - 1

## Approach

The sequence is basically just a set of nested loops waiting to happen: 1 appears once, 2 twice, 3 three times, and so on. Since k is small, we don't need any fancy math or closed-form formulas. I just used an outer loop for the number being printed and an inner loop to handle its repetition. The key is stopping exactly when we've printed k elements so we don't overshoot. It's a simple simulation that gets the job done without overthinking.

## Complexity

| | |
|-|--|
| Time | O(k) |
| Space | O(1) |

## Key Insights

- The value i repeat i times, meaning we just need to nest a loop that runs from 1 to i inside a loop that goes from 1 to k.
- The variable 'p' acts as a simple counter to break out of the nested loops the second we hit the k-th element.

## Common Mistakes

- Forgetting to check the counter inside the inner loop, which would cause you to print more numbers than requested.
