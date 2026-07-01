# Explanation — 828. კატო და საყვარელი სიმბოლო

## Approach

This one is pretty straightforward. You just need to iterate through the string and check if each character matches the target. The tricky part is that the problem doesn't explicitly say the case sensitivity works a certain way, but based on typical CP task logic for this level, you handle both uppercase and lowercase by shifting the ASCII values. Adding or subtracting 32 flips the case, since that's the distance between 'a' and 'A' in the ASCII table.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- ASCII values for letters are separated by exactly 32, which is the fastest way to toggle case without using heavy functions like tolower().
- Since we only care about the count, a simple linear pass through the string is all it takes.

## Common Mistakes

- Forgetting that the input might be either uppercase or lowercase and failing to check for both variants.
