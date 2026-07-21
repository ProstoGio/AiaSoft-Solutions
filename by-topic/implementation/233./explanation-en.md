# Explanation — 233. ჩოგბურთის მატჩის ოქმი

## Approach

This problem is basically about keeping track of the match state using counters. I used two counters to track how many sets each player won, and two variables to accumulate their total game scores. The loop runs up to 5 times, but I added a break condition as soon as someone reaches 3 sets to stop the input processing early. After the loop, I just check which counter hit 3 to decide the winner and print the final totals.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- No need to store the input in an array since we only need the running totals.
- The input can contain zeros for unplayed sets, so the loop structure must handle early termination correctly.

## Common Mistakes

- Forgetting to stop the input reading when one player reaches 3 sets.
- Miscalculating the total scores by including values from sets that shouldn't have been played.

## Walkthrough

I initialized 'fc' and 'sc' for set wins, and 'ff' and 'ss' for total game points. Inside the while loop, I read each pair, add them to the totals, and increment the respective win counter. Once a counter hits 3, I break the loop to avoid processing the trailing zeros in the input.
