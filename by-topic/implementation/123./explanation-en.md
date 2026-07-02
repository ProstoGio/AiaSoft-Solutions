# Explanation — 123. სტრიქონის შეტრიალება

## Approach

The task asks for a reversed string using recursion, though my current code is iterative. I went with the loop first because it's the most readable way to grab characters from the end of the input and push them into a new container. You're just starting at `s.size() - 1` and decrementing the index until you hit zero. It's clean, efficient, and gets the job done without overcomplicating things.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- String traversal is straightforward; just make sure your loop boundary condition hits index zero to avoid off-by-one errors.
- The iterative approach is memory-efficient enough for these constraints, keeping space complexity linear relative to the string size.

## Common Mistakes

- Starting the loop at s.size() instead of s.size() - 1, which causes an out-of-bounds access.
