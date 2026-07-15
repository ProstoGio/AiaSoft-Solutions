# Explanation — 752. ბედნიერი ბილეთი

## Approach

Since we are dealing with a fixed 6-digit number, the easiest way to solve this is to extract every digit individually using basic math. I just used division to isolate the first three digits and modulo to get the last three. After splitting the number into two parts, I simply summed them up and compared the results. No complex logic is needed here.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Use integer division (n/1000) to strip off the last three digits easily.
- Use modulo (%) to isolate specific digits one by one.

## Common Mistakes

- Forgetting to check if the input is strictly 6 digits, though the constraints guarantee it.
- Using string manipulation instead of simple math, which is slower and unnecessary.

## Walkthrough

I read the integer n, then created six variables to store each digit. For example, a1 is just n/100000, while a6 is n%10. I grouped a1, a2, a3 as the first half and a4, a5, a6 as the second. A single if-statement checks the equality of their sums and prints YES or NO.
