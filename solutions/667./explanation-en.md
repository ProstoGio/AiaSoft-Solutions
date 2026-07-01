# Explanation — 667. ბაბიმ თვლა ისწავლა

## Approach

When I first looked at this, the constraint about '2' being between 1 and 3 (or not there at all) sounded restrictive, but it actually simplifies things once you write out the first few cases. You can't have identical digits adjacent, so that's standard. After testing for small lengths, it's clear this is just a Fibonacci-like pattern. For length 1, we have [1, 3] (2 is excluded because it can't be between anything). For length 2, we have [13, 31]. For length 3, you add the previous two counts. It's essentially counting valid paths where each step depends on the last two choices.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The '2' constraint effectively forces sequences to maintain a specific alternating flow, which naturally limits your choices to two options at each step.
- The sequence follows a simple recurrence relation where the current state depends only on the two previous lengths.

## Common Mistakes

- Forgetting the base case where length 1 doesn't allow '2' because it can't be sandwiched between two other digits.

## Walkthrough

For n=1, options are {1, 3} (count 2). For n=2, options are {13, 31} (count 2). For n=3, the valid strings are 123, 321, 131, 313 (count 4). Notice 2+2=4; it scales linearly as d[i] = d[i-1] + d[i-2].
