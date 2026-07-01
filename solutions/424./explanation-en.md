# Explanation — 424. ვინ არის მარტო?

## Approach

At first, you might think about using a hash map to count frequencies or sorting the array, but that's overkill. The elegant way to solve this is using the XOR operator. Since XORing a number with itself results in zero and XORing any number with zero leaves it unchanged, all the pairs will eventually cancel each other out. This leaves you with nothing but the single, unique element sitting in your answer variable.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(1) |

## Key Insights

- XOR has the property of commutativity and associativity, meaning the order doesn't matter.
- A ^ A = 0 and A ^ 0 = A, so pairs effectively vanish when XORed together.

## Common Mistakes

- Trying to use frequency arrays or maps, which uses unnecessary extra memory.
