# Explanation — 734. შებრუნებული რიცხვი

## Approach

Since the input is guaranteed to be a two-digit number, we don't need any loops or complex string manipulation. You just isolate the tens and units place using basic arithmetic. Integer division by 10 gives you the first digit, and the modulo operator grabs the remainder. From there, it's just a simple swap and sum to reconstruct the number in reverse.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division (a/10) effectively drops the last digit of the number.
- The modulo operator (a%10) gives you exactly the last digit, which becomes your new leading digit.

## Common Mistakes

- Overcomplicating the logic by converting the integer to a string instead of just doing the math.
