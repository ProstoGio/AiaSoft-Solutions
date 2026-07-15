# Explanation — 401. საუკუნე

## Approach

This problem is a basic range check. I just used simple if-else statements to verify if the input N falls within the 1900-1999 or 2000-2099 intervals. If the number doesn't match either, the code outputs -1 as requested. It's a straightforward implementation task.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Centuries are defined by inclusive ranges, so using >= and <= is necessary.
- The order of checks doesn't matter here since the intervals are disjoint.

## Common Mistakes

- Using exclusive bounds like < 2000 or > 1999, which leads to missing edge cases.
- Printing the wrong strings because the output format is slightly specific.

## Walkthrough

Read the integer N, check if it's between 2000 and 2099 to print 'b21', then check 1900 to 1999 for 'b20', otherwise default to 'b-1'.
