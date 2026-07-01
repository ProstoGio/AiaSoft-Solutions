# Explanation — 818. ელემენტები დიაპაზონიდან

## Approach

This one is as straightforward as it gets. I just set up a couple of variables to keep track of the count and the running sum, then checked each number as I pulled it from the input. Instead of storing everything in an array first and processing it later, I update my totals on the fly to save a tiny bit of overhead. The only edge case is when that counter stays at zero, which is my cue to just output -1.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- No need for a second pass; keeping a running count and sum while reading input is clean and efficient.
- The -1 condition acts as a simple flag check at the end.

## Common Mistakes

- Forgetting to initialize the counter and sum to zero, which can lead to garbage output if nothing matches.
