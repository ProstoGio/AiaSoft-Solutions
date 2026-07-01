# Explanation — 850. მინიმალური კენტი

## Approach

To solve this, I look for the first odd number in the array to use as a starting 'minimum'. Once I hit that first odd value, I trigger a nested loop to scan the rest of the array for anything even smaller. It’s a greedy approach; if I find an odd number, I immediately check if it's the smallest one available. If I finish the entire loop without ever spotting an odd number, I just print -1.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The first odd number acts as a baseline, and every subsequent odd number is compared against it.
- The 'return 0' immediately after finding the smallest odd keeps the logic clean and prevents unnecessary searching.

## Common Mistakes

- Forgetting to output -1 if the array contains only even numbers.
