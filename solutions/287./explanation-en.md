# Explanation — 287. არჩევნები

## Approach

To win an election against just one opponent, you need a simple majority. If you have N voters, you need more than half of them to secure the win. In integer division, dividing N by 2 and adding 1 gives you exactly the smallest integer greater than 50%. It’s a classic math trick where the floor of N/2 plus one covers every case, even when N is odd.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Integer division in C++ automatically truncates, so n/2 already gives you the 'halfway' point.
- Adding 1 pushes the count just over the threshold required for a victory.

## Common Mistakes

- Trying to use conditional if-else statements for even and odd numbers separately when a single formula works for both.
