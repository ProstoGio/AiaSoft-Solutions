# Explanation — 062. პირველკლასელი (ოღონდ მეორე)

## Approach

The core of the problem is parsing a single string that contains two numbers and one operator. Instead of reaching for library functions like `stoi` or `stringstream`, I pre-calculated powers of ten in a vector to manually convert characters to integers. It’s a bit more manual, but it guarantees you avoid any weird buffer or formatting issues. Once the string is split at the operator sign, it's just basic arithmetic.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- Using ASCII values directly (subtracting 48) is the standard way to turn a char into a digit.
- The input constraint of 8 digits means long long is overkill, but it saves you from worrying about overflow if you decide to play around with even larger numbers later.

## Common Mistakes

- Forgetting to handle the operator index properly, which can lead to off-by-one errors when slicing the second number.
