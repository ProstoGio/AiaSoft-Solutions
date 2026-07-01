# Explanation — 366. რამდენი ნულია?

## Approach

To solve this, I just break the number down digit by digit using recursion. The base case is the tricky part because if the input is exactly 0, I have to count it as one zero, but for any other single-digit number, the answer is zero. For everything else, I check if the last digit is a zero by using modulo 10 and then recurse on n divided by 10. It’s a clean way to process the number without converting it to a string, which feels way more 'C++' to me.

## Complexity

| | |
|-|--|
| Time | O(log n) |
| Space | O(log n) |

## Key Insights

- The base case for 0 is separate because the number 0 itself contains one zero, but leading zeros in larger numbers shouldn't be counted.
- Using n % 10 is the standard way to peel off the last digit, and recursion handles the rest of the stack naturally.

## Common Mistakes

- Forgetting that 0 is a valid input and failing to return 1 in that specific case.
