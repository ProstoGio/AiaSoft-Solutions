# Explanation — 085. გამრავლება

## Approach

This is about as straightforward as it gets. You just read two integers from the input stream and return their product. I wrapped the multiplication in a small function just to keep things organized, but honestly, even a one-liner would work. Since the constraints are tiny, the standard `int` type handles the product without any risk of overflow.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- No need to overthink data types since the constraints are extremely small.
- A simple multiplication operator handles everything for you.

## Common Mistakes

- Overcomplicating the logic by using unnecessary loops or conditional checks.
