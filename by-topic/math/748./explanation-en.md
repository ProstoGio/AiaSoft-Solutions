# Explanation — 748. ბედნიერი რიცხვები

## Approach

Since the range is fixed between 100,000 and 999,999, a simple brute force approach works perfectly fine. I wrote a check function that uses basic modulo and division math to extract each of the six digits. Then, it just compares the sum of the first three digits to the sum of the last three. I loop from A to B and increment a counter every time the condition returns true.

## Complexity

| | |
|-|--|
| Time | O(N), where N is the difference between B and A. |
| Space | O(1) |

## Key Insights

- No need for advanced math or patterns here because the constraints are small enough for a loop.
- Extracting digits with division and modulo is faster than converting the number to a string.

## Common Mistakes

- Forgetting to check the inclusive range properly.
- Messing up the digit extraction logic by miscalculating the powers of 10.

## Walkthrough

The code takes the input, runs a while loop from A to B, and calls the check function for every number. The check function breaks the integer into six parts and compares their sums. If the sums are equal, the counter goes up by one, and finally, we output the result.
