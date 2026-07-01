# Explanation — 860. მასივის კენტები

## Approach

This one is as straightforward as it gets. I just read the numbers into an array, then run a simple loop to check each one with the modulo operator. I keep two separate counters—one for the count of odd numbers and one for the running sum. If the flag variable ends up being zero, it means I didn't find any odd numbers, so I output -1.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Using a modulo check `a[i] % 2 != 0` is the cleanest way to catch those odd values.
- A simple flag like `t` saves you from needing complex conditional logic at the end.

## Common Mistakes

- Forgetting to handle the edge case where no odd numbers exist, which results in failing the test case requirement.
