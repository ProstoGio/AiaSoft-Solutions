# Explanation — 540. უდიდესი AND

## Approach

The trick here is to build the answer bit by bit from the most significant bit down to zero. We maintain a mask, 'ans', representing the bits we've already decided to keep. In each iteration, we toggle the current bit in our mask and count how many input numbers satisfy this pattern. If two or more numbers contain all the bits set in our mask, we lock that bit in; otherwise, we discard it.

## Complexity

| | |
|-|--|
| Time | O(n * log(max(ai))) |
| Space | O(n) |

## Key Insights

- Instead of checking all pairs—which would be O(n²)—we greedily verify if a specific bit configuration is supported by at least two elements.
- The greedy approach works because bitwise AND is monotonic; adding a bit that can't be supported by two numbers would make the result smaller than it could be.

## Common Mistakes

- Trying to use a brute-force O(n²) approach, which will definitely TLE given N is 200,000.

## Walkthrough

For input [12, 10, 8], we check bit 3 (value 8). Both 12 (1100) and 8 (1000) have it, so ans becomes 8. Then we check bit 2 (value 4). 12 has it, but no other number with an 8 also has a 4. So we discard bit 2, and the answer remains 8.
