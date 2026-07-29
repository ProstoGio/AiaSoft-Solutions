# Explanation — 772. სიმბოლოთა სიხშირე

## Approach

This problem is a basic frequency counting task. Since we are only dealing with lowercase Latin letters, I used a frequency array of size 150 to keep things simple. The code iterates through the input string once, incrementing the value at the index corresponding to the ASCII code of each character. Finally, it loops from 97 to 122—which are 'a' through 'z'—and prints the stored counts.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(1) |

## Key Insights

- ASCII values for 'a' to 'z' are contiguous, making array indexing very efficient.
- The constant array size makes the space complexity O(1) regardless of the input length.

## Common Mistakes

- Trying to use a map instead of a vector, which adds unnecessary log(N) overhead.
- Printing counts for all characters in the ASCII table instead of just the lowercase ones.

## Walkthrough

Read the string into variable 's'. Loop through each character and update the 'freq' array using the char itself as the index. Then, loop specifically through the range 97-122 to output exactly what the problem demands.
