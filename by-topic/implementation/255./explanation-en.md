# Explanation — 255. მასივის დალაგება - 2

## Approach

This problem is a classic sorting task. Since the constraints go up to 10⁵, a simple O(n log n) sorting algorithm is exactly what we need. I used the built-in sort function from the C++ standard library, which is highly optimized and handles this input size comfortably within the 1-second time limit. The logic is straightforward: read the size, store elements in a vector, sort them, and print.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- The C++ std::sort function uses Introsort, which is efficient enough for 10⁵ elements.
- Using cin and cout with large inputs can be slow, though it passes here without fast I/O optimizations.

## Common Mistakes

- Using O(n²) algorithms like bubble sort will definitely TLE given the N=10⁵ limit.
- Forgetting to include <bits/stdc++.h> or <algorithm> header.

## Walkthrough

First, I declare a vector of size N to hold the integers. I loop through the input to fill the vector, call sort starting from begin() to end(), and then loop one more time to output the sorted elements separated by spaces.
