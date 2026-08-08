# Explanation — 641. მიმდევრობის წევრი

## Approach

The problem asks if a number x can be represented as a linear combination of given numbers a_i. This is a classic application of Bezout's Identity. Basically, any number that can be expressed as a_1*b_1 + ... + a_n*b_n must be a multiple of the greatest common divisor of all a_i. I just calculate the GCD of the entire array and check if each query x is divisible by it.

## Complexity

| | |
|-|--|
| Time | O(N * log(min(A)) + Q) |
| Space | O(N + Q) |

## Key Insights

- The linear combination of N numbers covers exactly the multiples of their GCD.
- Need to handle the case where all a_i are zero carefully.
- Using std::gcd simplifies the implementation.

## Common Mistakes

- Forgetting to take the absolute value of the numbers before calculating GCD.
- Failing to handle the case where GCD is 0.

## Walkthrough

First, I store all a_i in a vector. Then, I iterate through the array to find the cumulative GCD. Once I have the GCD, each query is just a simple modulo check. If the remainder is zero, the answer is YES; otherwise, it's NO.
