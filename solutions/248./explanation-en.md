# Explanation — 248. მასივის შემობრუნება

## Approach

This one is as straightforward as it gets. You read the size of the array, store the elements in a standard array, and then just iterate backwards starting from the last index down to zero. Printing them in this reverse order gives you exactly what the problem asks for. There's no need to swap elements in place or use extra memory for a second array because you can just output them while traversing the original sequence in reverse.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Instead of wasting time reversing the actual array in memory, just change your loop direction.
- Starting your loop at n-1 and stopping at 0 is all you need to flip the output sequence.

## Common Mistakes

- Forgetting to decrement n before starting the loop, which causes an out-of-bounds access error.
