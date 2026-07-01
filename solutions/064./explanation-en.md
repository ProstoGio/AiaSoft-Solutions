# Explanation — 064. ფრჩხილებიანი მეორეკლასელები

## Approach

This is a classic stack-based problem, but since we're only dealing with one type of bracket, we don't actually need a full stack data structure. A simple integer counter is enough to track the balance. You just increment the counter whenever you hit an opening parenthesis and decrement it for a closing one. If the balance ever dips below zero, it means a closing bracket appeared without a matching opener, which is an immediate 'NO'. Once the loop ends, the counter must be exactly zero, otherwise, there are unclosed brackets left over.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- You only care about the relative order, so treating '(' as +1 and ')' as -1 simplifies everything.
- The running sum must stay non-negative throughout the entire string, and end at exactly zero.

## Common Mistakes

- Forgetting to check if the final counter value is zero after the loop finishes.
