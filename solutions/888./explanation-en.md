# Explanation — 888. πბონაჩის მიმდევრობა

## Approach

This is essentially just a Fibonacci sequence where you replace 1 with 3.14. Since n is only up to 35, there's no need for any fancy math; a simple array or even just three variables will handle the additions perfectly. Just make sure to use double for precision, because the numbers grow quite quickly.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Treat it exactly like a standard Fibonacci recurrence: next = current + previous.
- The setprecision(2) manipulator is mandatory to pass the formatting check.

## Common Mistakes

- Forgetting to use fixed with setprecision, which messes up the formatting of the trailing zeros.
