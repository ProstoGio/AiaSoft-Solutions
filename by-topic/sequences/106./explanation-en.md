# Explanation — 106. ლიდერები

## Approach

If you check from left to right, you'd end up with an O(n²) disaster because you'd have to re-scan the entire suffix for every single element. Instead, just walk backwards from the end of the array. The last element is always a leader by definition, so we keep track of the maximum value encountered so far as we move left. Any number greater than or equal to that running maximum is also a leader. Since we collect them in reverse order, we just print the final list backwards to get the correct original sequence.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Checking from right-to-left turns a nested loop into a single linear pass.
- Keeping track of the maximum value found so far is all you need to decide if an element is a leader.

## Common Mistakes

- Using a nested loop approach which will definitely TLE given the n=10⁶ constraint.
