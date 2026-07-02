# Explanation — 148. განსხვავებული რიცხვების რაოდენობა 2

## Approach

When you see a problem asking for the number of unique elements, the first thing you should think of is a Set. C++ sets automatically handle duplicates for us, keeping only one copy of every value that gets inserted. We just need to read the numbers one by one, toss them into the set, and look at the size at the end. It's clean, efficient, and honestly exactly what the STL was built for.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- The set container acts as a filter that ignores any duplicate values during insertion.
- Using an std::set gives us O(log n) insertion time per element, which is perfectly safe for n up to 10⁵.

## Common Mistakes

- Trying to use a nested loop to check for duplicates manually, which would hit O(n²) and get a Time Limit Exceeded.
