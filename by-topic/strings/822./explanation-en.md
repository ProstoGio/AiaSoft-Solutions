# Explanation — 822. ნულების ამოგდება

## Approach

Since the input is just a short number (max 9 digits), I treat it as a string to make digit manipulation trivial. I iterate through each character of the string and check if it's '0'. If the character is anything else, I append it to a new result string. This keeps the original order intact without needing any complex math.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- Strings are much easier to work with than integers here because you don't have to worry about powers of 10 or modulo arithmetic.
- Appending to a string is perfectly efficient for a constraint of only 9 digits.

## Common Mistakes

- Trying to solve this using integer division and modulo, which makes handling leading zeros or position tracking much harder.
- Forgetting that the result might be empty if the input was only zeros (though the problem guarantees non-zero input).

## Walkthrough

I read the input into string 'n'. Then, I loop through every character in 'n'. If the character is not equal to '0', I add it to the 'n2' string. Finally, I print 'n2'.
