# Explanation — 140. მეორე ნომერი ცელქობა

## Approach

Honestly, this problem is a classic example of 'don't overthink it.' Even though the story talks about kids swapping places based on odd-indexed rules, you're ultimately just asked to return the students to their original height-sorted order. Since we know the teacher originally lined them up by height, sorting the array is all you need to do. The swapping rules are just flavor text meant to distract you from the fact that you're just looking for the sorted sequence.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- Don't get bogged down in simulating the swaps; just notice the end goal is a fully sorted array.
- The constraints are tiny (N=20), so even a bubble sort would work, but standard sorting is cleaner.

## Common Mistakes

- Trying to simulate the swap rules instead of realizing the teacher already had them sorted.
