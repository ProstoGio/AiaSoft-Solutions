# Explanation — 180. სიტყვები

## Approach

The main goal is to merge strings by overlapping the end of the current result with the start of the next word. I started by taking the first word as the baseline, then for each subsequent word, I checked if it's already a substring of the previous one to handle those weird 'exception' cases mentioned in the prompt. If it's not a direct substring, I look for the longest suffix of the current total string that matches a prefix of the incoming word. Once I find that maximum overlap, I append only the non-overlapping part of the new word to keep the chain continuous.

## Complexity

| | |
|-|--|
| Time | O(N * L^2) |
| Space | O(N * L) |

## Key Insights

- The exceptions are essentially cases where one word is already contained inside the other, so you just concatenate them as-is without trying to find an overlap.
- Finding the maximum overlap index by iterating backward or checking all possible slice lengths is enough given the constraints.

## Common Mistakes

- Forgetting to check if one string is already inside the other, which causes unnecessary logic for overlap that doesn't actually exist in the same way.

## Walkthrough

Take 'რაგუ' and 'გული'. Since 'გული' isn't inside 'რაგუ', we look for overlap. The longest suffix of 'რაგუ' that is a prefix of 'გული' is 'გუ' (length 2). We subtract that from 'გული' and append 'ლი' to get 'რაგული'.
