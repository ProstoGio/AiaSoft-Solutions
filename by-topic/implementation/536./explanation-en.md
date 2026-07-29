# Explanation — 536. გამქრალი სიმბოლო

## Approach

I decided to first sanitize the input string by sorting it and removing duplicates to make comparison easier. Then, I iterate through the alphabet from 'a' to 'z' using a simple character pointer and compare each with the unique characters found in the string. If a character is missing, I store it in a vector. Finally, I check if that vector is empty to print 'Complete' or output the missing characters separated by spaces.

## Complexity

| | |
|-|--|
| Time | O(N log N) due to sorting, where N is the string length. |
| Space | O(N + Σ) where Σ is the alphabet size (26). |

## Key Insights

- Sorting the input string first simplifies the comparison logic.
- Using ASCII values (97-122) allows us to iterate through the alphabet easily with a simple loop.

## Common Mistakes

- Forgetting to handle the case where the string is already a complete alphabet.
- Incorrectly indexing the string while comparing it with the alphabet characters.

## Walkthrough

I read the string, sorted it, and filtered it down to only unique characters. After that, I run a while loop from 'a' to 'z'. If the current alphabet character doesn't match the current character in my processed string, it means it's missing, so I add it to the results list. If it matches, I just advance both pointers.
