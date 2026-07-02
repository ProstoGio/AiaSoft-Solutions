# Explanation — 142. ისევ ბორანი

## Approach

This one is basically a straightforward simulation. Since we can't change the order of the cargo, we just grab items one by one from the queue. We keep a running total of the weight and count how many items we've packed. As soon as the next item would push us over the ferry's capacity limit, we stop and output the count of whatever we've collected so far.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- You don't actually need to store the whole array if you're careful, but for N=100, an array is perfectly fine and simple.
- The greedy approach works perfectly here because the order is fixed; you just take until you can't.

## Common Mistakes

- Forgetting to check the case where the ferry can actually carry all the cargo and the loop finishes naturally.
