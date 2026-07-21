# Explanation — 497. ოთხი ფერის ბურთულა

## Approach

This is a classic Pigeonhole Principle problem. To guarantee you have at least one of every color, you need to imagine the absolute worst-case scenario where you keep pulling balls but are missing one specific color. You sum up the three largest counts and add one, because that one extra ball will force you to finally pick the color you were missing. My code handles this by taking the total sum of all balls and subtracting the smallest count, then adding one.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Worst-case logic: assume you empty three buckets completely before getting the last color.
- The formula is (Sum - min_count) + 1.

## Common Mistakes

- Forgetting the '+1' at the end.
- Overthinking and trying to simulate the process instead of using math.

## Walkthrough

First, I read the four integers. The logic is to pull every single ball possible without completing the set. If I take all balls except for the rarest color, I might still be missing one. By adding 1 to the sum of the three largest counts, I guarantee that the final ball completes the set.
