# Explanation — 421. ტურისტი

## Approach

This problem is just a simulation. We keep track of the current total distance covered and how much the tourist walks each day. I used a while loop that runs as long as the current distance is less than the target N. In every iteration, I add the new daily distance and update the increment for the next day. Once the total distance hits or exceeds N, the loop stops and prints the day count.

## Complexity

| | |
|-|--|
| Time | O(sqrt(N)) |
| Space | O(1) |

## Key Insights

- The daily distance grows as an arithmetic progression.
- Since N can be up to 10^9 and the increment is at least 0, the number of days will be manageable within the time limit.

## Common Mistakes

- Using int for distance when N is 10^9 (though it fits, it's safer to use long long).
- Off-by-one errors in the day counter.

## Walkthrough

Start with day 1 and distance A. Inside the loop, add the current daily increment plus B to the total. Increment your day counter. Update the current daily distance. Keep going until you reach N.
