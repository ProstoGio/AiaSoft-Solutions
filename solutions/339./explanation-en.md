# Explanation — 339. საბავშვო მოედანი 2

## Approach

Since the seats are in a circle, there are always two paths between any two people. You can go clockwise or counter-clockwise. The number of people sitting between them in one direction is just the difference of their indices minus one. The path going the 'long way' around the circle has a length of N minus that count minus two. To get them together with the fewest swaps, you just pick whichever path is shorter.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- In a circle of N seats, the distance between index A and index B is calculated as abs(A - B) - 1 for one direction.
- The alternative path around the back of the circle is simply N minus the first distance minus two empty slots.

## Common Mistakes

- Forgetting that the seats are circular and only considering the direct distance.
- Off-by-one errors when counting the empty seats between the two friends.
