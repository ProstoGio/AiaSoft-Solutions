# Explanation — 528. ფერადი ბურთები

## Approach

This one is pretty straightforward once you stop overthinking it. If you have an even number of balls, you just split them exactly in half, leaving a difference of zero. If the number is odd, you can't split them perfectly, so you'll always be left with exactly one ball more in one box than the other. The parity of the number tells you everything you need to know, making it an O(1) check.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Even numbers can always be split into two equal piles, resulting in a zero difference.
- Odd numbers will always have a remainder of 1 after being divided by 2, which is the minimum possible difference.

## Common Mistakes

- Trying to use a loop or some complex dynamic programming approach when simple parity check is enough.
