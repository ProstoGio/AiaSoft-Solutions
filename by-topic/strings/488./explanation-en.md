# Explanation — 488. გაყოფადობა 11-ზე

## Approach

Since the input number can be up to 10^1000, we obviously can't store it as an integer type, so I handled it as a string. The problem is a classic application of the divisibility rule for 11, which says the alternating sum of digits must be divisible by 11. I just iterated through the string, separating digits based on their index parity, summed them up, and checked the difference. If the result is a multiple of 11, the answer is YES.

## Complexity

| | |
|-|--|
| Time | O(N) where N is the number of digits |
| Space | O(N) to store the input string |

## Key Insights

- Using a string allows handling huge numbers that exceed unsigned long long limits.
- The divisibility rule for 11 is equivalent to checking if (sum_odd_positions - sum_even_positions) % 11 == 0.

## Common Mistakes

- Trying to use standard integer types for 10^1000, which causes overflow.
- Confusing 0-based indexing with the problem's definition of odd/even positions.

## Walkthrough

First, I read the digits as a string. Then, I loop through each character, convert it to an int using (n[i] - '0'), and add it to either odd_sum or even_sum based on the index. Finally, I calculate the difference and check if it's divisible by 11 using the modulo operator.
