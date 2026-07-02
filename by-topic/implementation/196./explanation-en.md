# Explanation — 196. სიმბოლოთა ამომცნობი

## Approach

This one is as straightforward as it gets. I just read the string once and kept three counters running: one for digits, one for uppercase letters, and one for lowercase. Since the C++ `<cctype>` library handles character classification perfectly, I didn't need to manually check ASCII ranges. It's really just a single pass through the input, updating the relevant counter based on what I see at each index.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- Using built-in functions like isdigit, isupper, and islower is much safer than guessing ASCII codes.
- The input size is tiny (max 20), so a simple linear scan is way more than fast enough.

## Common Mistakes

- Forgetting to initialize the counters to zero before starting the loop.
