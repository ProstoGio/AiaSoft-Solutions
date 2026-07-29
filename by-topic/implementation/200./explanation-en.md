# Explanation — 200. რიცხვების შედარება

## Approach

Since the numbers can be as large as 10^100, standard integer types like long long will definitely overflow. I read both inputs as strings instead. First, I check the length: a longer string is always a larger number. If the lengths match, I iterate character by character from left to right to perform a lexicographical comparison.

## Complexity

| | |
|-|--|
| Time | O(N), where N is the number of digits. |
| Space | O(N) to store the digits in strings. |

## Key Insights

- Strings handle arbitrarily large numbers that exceed 64-bit integer limits.
- Length comparison is a quick shortcut before doing a detailed check.

## Common Mistakes

- Trying to use unsigned long long, which only goes up to 2^64-1.
- Comparing strings without checking length first.

## Walkthrough

I read 'a' and 'b' as strings. If 'a.size()' is bigger, it's obviously larger. If they're equal, I loop through index 'i'. The first position where digits differ tells me which number is bigger. If I finish the loop without finding differences, they must be equal.
