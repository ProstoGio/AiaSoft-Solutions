# Explanation — 701. მასივში ციფრთა ჯამი

## Approach

The task is straightforward: for every number in the input array, calculate the sum of its digits and output that sum. I wrote a small helper function called calc() that strips digits one by one using modulo 10 and division by 10. Then, I just iterate through the array, pass each number to the function, and print the result. Simple as that.

## Complexity

| | |
|-|--|
| Time | O(N * log10(max_element)) |
| Space | O(N) |

## Key Insights

- Using x % 10 gets the last digit and x /= 10 removes it, which is the standard way to process digits.
- Since the numbers are up to 10^5, the while loop runs at most 5-6 times per number.

## Common Mistakes

- Forgetting to handle the case where the input might contain 0 (though the problem says positive integers here).
- Using string conversion, which works but is significantly slower than direct math.

## Walkthrough

First, we read N. We loop through the input numbers. Inside the loop, the calc() function calculates the sum for the current number. Finally, we print the sums separated by spaces.
