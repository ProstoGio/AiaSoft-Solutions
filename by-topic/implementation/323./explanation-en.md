# Explanation — 323. სიმბოლოს რიგითი ნომერი

## Approach

The most straightforward way to solve this is to just map out the alphabet and find where our character sits. I created a string containing 'a' through 'z' and ran a loop to match the input character against each index. Once the characters match, the current loop index plus one gives us the exact position. It’s definitely not the most optimized way to do this in C++, but it’s super readable and gets the job done instantly.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Since the alphabet size is constant (26), this loop effectively runs in constant time.
- The loop index is zero-based, so adding one is the only 'math' you really need here.

## Common Mistakes

- Forgetting the +1 offset and outputting a 0-indexed position instead.
