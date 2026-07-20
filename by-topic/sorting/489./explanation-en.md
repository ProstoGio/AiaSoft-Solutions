# Explanation — 489. დალაგება სიხშირით

## Approach

Since the numbers are between -100 and 100, I used a frequency array of size 201 to count occurrences after adding a 100-unit offset. I stored these pairs of (frequency, value) in a vector, which makes sorting much easier. The custom comparator handles the main requirement: sort by frequency ascending, and if they match, sort by the actual value descending. Finally, I just nested loops to print each number as many times as it appeared.

## Complexity

| | |
|-|--|
| Time | O(N log N) |
| Space | O(1) |

## Key Insights

- The input range [-100, 100] is small enough to map directly to array indices.
- The custom sorting condition needs to handle the tie-breaker correctly by checking values descending.

## Common Mistakes

- Forgetting to subtract the 100 offset when printing the final result.
- Sorting only the distinct numbers without accounting for their original frequencies.

## Walkthrough

First, read all numbers and increment their frequency count. I shifted the values by +100 so I could use them as array indices. After collecting the counts, I threw everything into a vector of pairs and sorted them using a lambda function. The sorting logic says: if counts are different, put the smaller count first; otherwise, put the bigger value first. Then, just loop through the sorted vector and print each number the amount of times it appears in the frequency map.
