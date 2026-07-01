# Explanation — 671. ბილეთების გაყიდვა

## Approach

This is a classic linear DP setup. You're trying to find the minimum cost to serve N people, so you just build up the answer from the first person to the last. At any position `i`, the person can either buy their own ticket, join a group of two with the person before them, or a group of three with the two preceding them. Since you want the local optimum at every step, `d[i]` just keeps track of the best time to finish the line up to that specific person.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The state definition `d[i]` naturally incorporates all previous choices, so you don't need to look back further than three steps.
- Base cases for indices 0, 1, and 2 are crucial because the recurrence relation doesn't fully kick in until you have enough people to form a group of three.

## Common Mistakes

- Forgetting to handle the base cases separately, which causes index out-of-bounds errors when calculating `d[i-3]`.

## Walkthrough

If you have 3 people, `d[2]` checks: `d[1]+a[2][0]` (person 3 goes solo), `d[0]+a[1][1]` (persons 2 and 3 pair up), or `a[0][2]` (all three group together). You take the minimum of these three scenarios.
