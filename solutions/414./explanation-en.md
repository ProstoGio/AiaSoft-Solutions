# Explanation — 414. უდიდესი რიცხვი

## Approach

The problem asks for the largest possible number formed by concatenating two digits, a and b, and adding one. Since we want to maximize the result, we should place the larger digit in the tens position. Once we compare a and b, we just combine them using math: the bigger one gets multiplied by ten, added to the smaller one, and finally, we bump the whole thing up by one.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Placing the larger digit in the tens place is the key to maximizing the value.
- You don't need string manipulation; simple arithmetic (a * 10 + b) works perfectly fine.

## Common Mistakes

- Assuming the order of inputs matters (e.g., just calculating 10*a + b + 1 without checking which digit is larger).
