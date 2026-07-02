# Explanation — 688. მაქსიმალური პალინდრომი

## Approach

This is a classic dynamic programming problem where we build the solution from smaller substrings to larger ones. I defined a 2D array where dp[l][r] acts as a boolean flag, marking whether the substring from index l to r is a palindrome. For a substring to be a palindrome, its ends must match and the inner part must also be a palindrome. I iterate through all possible lengths starting from 2, updating the 'answer' variable whenever I find a new longest match.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n²) |

## Key Insights

- Base cases are single characters, which are always palindromes of length 1.
- The recurrence relation works by checking if the outer characters match (s[l] == s[r]) and if the substring between them is already marked as a valid palindrome.

## Common Mistakes

- Forgetting to initialize the base case where every single character is a palindrome of length 1.
- Allocating a huge 2D array globally to avoid stack overflow issues since 10,000 squared integers will blow up the local stack.

## Walkthrough

Consider 'aba'. dp[0][0], dp[1][1], and dp[2][2] start as true. When len=2, no pairs match. When len=3, I check l=0, r=2. s[0]==s[2] ('a'=='a') and dp[1][1] is true, so dp[0][2] becomes true, updating the answer to 3.
