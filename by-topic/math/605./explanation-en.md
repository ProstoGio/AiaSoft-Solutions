# Explanation — 605. გადაიყვანე ორობითში

## Approach

To convert a decimal to binary, you just keep dividing by two and tracking the remainders. The remainders give you the bits, but they come out in reverse order—from the least significant bit to the most significant. I just push those remainders into a string and use reverse() at the end to flip it back. Don't forget the base case where N is zero, otherwise, you'll get an empty output.

## Complexity

| | |
|-|--|
| Time | O(log N) |
| Space | O(log N) |

## Key Insights

- The division method works because each digit in binary represents a power of two; dividing by two shifts these powers right.
- Using 'x % 2 + '0'' is a clean way to convert the integer remainder into its char representation.

## Common Mistakes

- Forgetting to handle the N=0 case, which results in no output because the while loop condition is never met.
