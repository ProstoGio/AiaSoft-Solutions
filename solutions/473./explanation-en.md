# Explanation — 473. არითმეტიკული ქვემიმდევრობა

## Approach

The trick here is to find the point where the arithmetic progression breaks. Instead of checking every possible suffix, I just keep track of the current difference between consecutive elements. When the difference changes, I know that the 'true' arithmetic sequence must start at the current index. I update my index pointer to this new location and keep going until the end of the array. By the time I finish the loop, I'm left with the last valid starting position.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Any sequence of length 1 or 2 is technically an arithmetic progression, which naturally sets the base case.
- Updating the index every time the difference changes ensures we only care about the most recent 'broken' part of the chain.

## Common Mistakes

- Forgetting that a single element or two elements are always arithmetic, which means the index shouldn't be initialized to something that misses the start.
