# Explanation — 821. ნულების გადასმა

## Approach

Since the constraint says the number has at most 9 digits, treating it as a string is the most straightforward way to go. I just iterate through the characters once: if it's not a zero, I append it to a new string right away. If I see a zero, I just keep a count of them. After the loop, I simply tack all those collected zeros onto the end of my new string.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Keeping the non-zero digits in their relative order is easy if you just build a new string as you scan.
- Counting the zeros and appending them at the end is way cleaner than trying to rearrange elements in-place.

## Common Mistakes

- Overthinking by trying to convert the number to an integer first, which isn't necessary here.
