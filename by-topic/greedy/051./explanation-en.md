# Explanation — 051. შესაკრებთა წყვილების პოვნა

## Approach

Sorting the array is the key here. Once you have the numbers in order, you can use two pointers: one starting at the very beginning and the other at the very end. By checking the sum of these two elements, you immediately know which way to move. If the sum is too small, you need a larger number, so you bump the left pointer up. If it's too big, you slide the right pointer down to decrease the total. It’s a classic two-pointer technique that avoids the headache of an O(n²) nested loop.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- Sorting turns a search problem into a predictable movement of pointers.
- Because the array values are distinct, you don't have to worry about the middle elements colliding in complex ways when l and r meet.

## Common Mistakes

- Trying to use a nested loop, which will definitely TLE given the 10^5 constraints.

## Walkthrough

Imagine [1, 2, 3, 4, 5] and target X=6. Pointers at 1 and 5 give 6 (hit!), move both. Next, pointers at 2 and 4 give 6 (hit!), move both. Finally, pointers at 3 and 3 stop since l is not < r. Result: 2 pairs.
