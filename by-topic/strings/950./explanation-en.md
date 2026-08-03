# Explanation — 950. ახალი სიტყვები

## Approach

The goal is to find the longest overlap where the end of string A matches the start of string B. I iterate through the length of B, checking for every prefix if it exists as a suffix of A. Once I identify the longest matching length k, I print string A and append string B starting from index k. This effectively merges the two strings by removing the duplicate overlapping part.

## Complexity

| | |
|-|--|
| Time | O(N * min(N, M)) |
| Space | O(N + M) |

## Key Insights

- The overlap cannot be longer than the length of the shorter string.
- Checking suffix/prefix equality is the core bottleneck, but given constraints of 5000, a simple loop works fine.

## Common Mistakes

- Forgetting to check the case where there is no overlap (k=0).
- Using inefficient string concatenation inside loops which can hit TLE for larger strings.

## Walkthrough

I read two strings and try all possible prefixes of B. For each prefix, I compare it against the end of A. If they match, I update k. Finally, I print s1 and the rest of s2 starting after the overlap.
