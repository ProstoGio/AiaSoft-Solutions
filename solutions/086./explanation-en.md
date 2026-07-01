# Explanation — 086. სტრიქონის სიგრძე

## Approach

This one is basically the 'Hello World' of string problems. Since the task asks for the length, the built-in .size() method in C++ is the most direct way to get the job done. I used getline instead of cin because standard cin stops at whitespace, and the problem description specifically mentions spaces might be part of the input. It's a quick one-liner that handles everything without needing any manual loops.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Using getline(cin, s) is crucial here because simple cin >> s would break the moment it hits a space.
- The .size() member function of the string class returns the count of characters in constant time once the string is stored.

## Common Mistakes

- Using cin >> s instead of getline, which misses parts of the string if it contains spaces.
