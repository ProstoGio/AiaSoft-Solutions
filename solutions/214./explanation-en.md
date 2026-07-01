# Explanation — 214. შეცვალეთ სიმბოლოები

## Approach

This one is pretty straightforward. You just need to grab the input character by character and check if it's uppercase or lowercase. The ASCII table is your best friend here; since uppercase letters have lower integer values than lowercase ones, checking 'char < 97' does the trick instantly. I just iterate through the vector, flip the case using the built-in functions, and print them out. No fancy data structures needed.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- ASCII values for uppercase start at 65, while lowercase starts at 97, which makes simple numeric comparison enough to distinguish them.
- The tolower() and toupper() functions from the <cctype> header handle the heavy lifting for case conversion without needing manual offset math.

## Common Mistakes

- Forgetting that input might include non-alphabetic characters if the constraints aren't strictly letters, though this problem assumes standard Latin alphabet characters.
