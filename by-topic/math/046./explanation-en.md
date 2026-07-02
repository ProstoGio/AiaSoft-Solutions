# Explanation — 046. ათეულები და ასეულები

## Approach

To grab the first two digits of a three-digit number, you don't need to overcomplicate things with strings or arrays. Integer division is your best friend here. Dividing by 100 instantly isolates the hundreds place, and using modulo 10 after dividing by 10 gives you exactly the tens digit. Just add them up, and you're done.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division truncates the decimal, so 123 / 100 cleanly leaves you with 1.
- The combination of a division and a modulo operation is the standard way to strip digits off an integer.

## Common Mistakes

- Forgetting that integer division discards the remainder, which can be confusing if you're thinking in terms of float math.
