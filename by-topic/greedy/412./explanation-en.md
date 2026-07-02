# Explanation — 412. ავტობუსის გაჩერება

## Approach

This one is pretty straightforward if you look at it as a simple capacity problem. You have a pool of passengers (current N plus new M) and you just need to fill the bus slots in a specific priority order: seats first, then standing room. Anything left over is clearly stuck at the stop. I just treated it like filling buckets—keep pouring passengers until the bus is full or you run out of people.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The total number of people is just N+M, and the logic is just greedy allocation based on the hierarchy of seats vs standing room.
- By calculating 'sitting' first, you define exactly how many people are 'left' to fit into the standing area, making the math for the leftovers trivial.

## Common Mistakes

- Trying to calculate 'standing' without subtracting the people who already got seats from the total pool.
