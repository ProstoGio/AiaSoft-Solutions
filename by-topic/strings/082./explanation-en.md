# Explanation — 082. ისევ ფრჩხილები

## Approach

This is a classic stack problem where you need to verify if brackets are nested correctly. Whenever I encounter an opening bracket, I push it onto the stack. When I see a closing one, I check if it matches the top of the stack. If it matches, I pop it; if it doesn't, or if the stack is empty, the sequence is invalid. Finally, I double-check the balance of each type to ensure nothing was left hanging.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Use a stack for LIFO bracket matching.
- The stack ensures that the last opened bracket is the first one closed.
- A simple count check at the end handles cases where the stack might be partially full.

## Common Mistakes

- Forgetting to check if the stack is empty before calling .top().
- Confusing the order of closing brackets.
- Ignoring cases where strings start with a closing bracket.

## Walkthrough

I read the string and loop through every character. Every time I hit '(', '[', or '{', it goes into the stack. If I hit a closing bracket, I peek at the top of the stack. If the types don't match or the stack is empty, it's an immediate 'NO'. After the loop, I verify the total count of each bracket type is zero just to be safe, then print 'YES' if everything is clean.
