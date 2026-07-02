# Explanation — 824. ნინი და ხინკალი

## Approach

To make the 'khinkali' delicious, we need the ingredient string to contain all 26 letters of the English alphabet. The rules allow us to either add one character or change one. This means if we already have 25 unique characters, we can just add the missing one, or if we have 26, we are golden. Effectively, we can succeed if the string already contains at least 25 unique letters.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- The problem boils down to checking how many unique letters are present after sorting.
- If we have 25 unique letters, we use our one allowed operation to add the missing one. If we have fewer than 25, even changing or adding one character won't reach the full set of 26.

## Common Mistakes

- Miscounting the number of unique characters needed; thinking you need more than one operation when you are close.
