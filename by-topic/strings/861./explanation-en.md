# Explanation — 861. წაშალეთ სიმბოლო

## Approach

The main goal here is just to filter the string by stripping away any character that matches K. Since C++ strings are mutable, I just iterate through the indices one by one. Whenever I find a match, I use the erase method to kill that character on the spot. The trick is to decrement the counter i immediately after erasing, because otherwise, you'd skip the very next character as the string shifts left.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(1) |

## Key Insights

- The string shrinks during iteration, so you have to manually adjust the loop counter or you'll miss characters.
- Erasing is an O(n) operation inside a loop, which is why it's O(n²) overall—totally fine for N=100.

## Common Mistakes

- Forgetting to decrement 'i' after erase(), which makes the loop skip the character that just shifted into the current index.
