# Explanation — 738. ხელფასები

## Approach

This one is as straightforward as it gets. Since we only have three variables, there is no need to overcomplicate things with sorting algorithms or arrays. I just used the built-in C++ min and max functions with initializer lists to pull out the extremes immediately. The difference between the highest and lowest values is the answer.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The C++ initializer list syntax in std::max({a, b, c}) makes comparing more than two variables super clean.
- Since the input size is constant, you don't need any extra memory or data structures.

## Common Mistakes

- Trying to use complex if-else chains, which is just way too much code for such a simple task.
