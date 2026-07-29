# Explanation — 501. რამდენიმე რიცხვის უსგ

## Approach

This problem is a classic application of the Greatest Common Divisor (GCD) for multiple numbers. The core idea is that GCD is associative, meaning GCD(a, b, c) is just GCD(GCD(a, b), c). I used the built-in C++ gcd function to process the list iteratively. After reading the inputs, I initialize a variable with the first element and update it by calculating the GCD with every subsequent number in the array. This keeps the running result shrinking until we hit the final answer.

## Complexity

| | |
|-|--|
| Time | O(N * log(min(A))) |
| Space | O(N) |

## Key Insights

- GCD(a, b, c) = GCD(GCD(a, b), c)
- Using the built-in std::gcd is safer and cleaner than writing your own Euclidean algorithm.
- The order doesn't strictly matter, but keeping track of the result in a single variable is efficient.

## Common Mistakes

- Forgetting to handle cases where one of the numbers is zero.
- Thinking you need to find all divisors of each number instead of using the Euclidean algorithm.
- Integer overflow if the input numbers were much larger (though 2*10^9 fits in a standard int).

## Walkthrough

First, I store all N integers in a vector. Then, I set my `temp` variable to the first number. I loop through the rest, updating `temp` by calling `gcd(temp, a[i])` in every iteration. By the end, `temp` holds the GCD of the whole sequence.
