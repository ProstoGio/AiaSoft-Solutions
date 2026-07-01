# Explanation — 826. სამნიშნას უდიდესი

## Approach

Since the input is guaranteed to be a three-digit number, the easiest way to grab the digits is through simple integer division and modulo. I get the hundreds digit by dividing by 100, the tens by taking the number modulo 100 then dividing by 10, and the units digit by just using modulo 10. Once I have the three separate integers, finding the maximum is trivial with C++'s built-in max function using an initializer list.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division in C++ automatically truncates decimals, which is exactly what we want to isolate digits.
- Using an initializer list with std::max is much cleaner than writing a chain of nested if-else statements.

## Common Mistakes

- Trying to solve it by converting the number to a string instead of using pure math.
