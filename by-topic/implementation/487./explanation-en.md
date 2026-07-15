# Explanation — 487. მკაცრად მონოტონურობა

## Approach

To solve this, I check the relationship between the first two elements to determine if the sequence should be strictly increasing or decreasing. If the first two are equal, it's impossible for the sequence to be strictly monotonic. Otherwise, I loop through the rest of the array to ensure every pair follows the same rule. If I find a single pair that violates this condition, I immediately output NO. It's a straightforward O(n) scan.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Strictly monotonic means no two adjacent elements can be equal.
- The trend is decided entirely by the first two elements.
- Handling the n=1 case separately is safer to avoid out-of-bounds errors.

## Common Mistakes

- Forgetting to check the equal case (a[0] == a[1]).
- Using >= or <= instead of > or < when the sequence needs to be strictly monotonic.
- Accessing index i+1 when the loop limit is not handled correctly.

## Walkthrough

I read the input into a vector. If n=1, it's YES by definition. For larger arrays, I compare a[0] and a[1]. If a[0] > a[1], I expect every next element to be smaller than the previous one; if a[0] < a[1], I expect every next element to be larger. If any check fails, I kill the program with NO.
