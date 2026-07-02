# Explanation — 149. განსხვავებული სიმბოლოების რაოდენობა

## Approach

The core of the problem is just counting unique characters, and there's no better tool for this than a set. Since a std::set automatically handles duplicates by ignoring them, we can just dump every character of the string into the container. Once that's done, the set's size property tells us exactly how many distinct letters we had in the original input. It's a classic one-liner logic stretched over a simple loop.

## Complexity

| | |
|-|--|
| Time | O(n log k) |
| Space | O(k) |

## Key Insights

- Using a std::set is the most straightforward way to filter out duplicates since it only stores unique elements.
- The time complexity depends on the alphabet size k, which is at most 26 here, making the solution extremely efficient.

## Common Mistakes

- Trying to use a nested loop to compare every character against every other character, which would be unnecessarily slow at O(n²).
