# Explanation — 087. N რიცხვის ჯამი

## Approach

This is a straightforward summation task, but you have to watch the data types. Since the input numbers can reach 10⁹ and there are up to 20 of them, the total sum could easily exceed the 32-bit integer limit, so I used `long long` from the start. I just dump the numbers into an array and pass that count to a helper function that accumulates everything into a single variable.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Always use `long long` when dealing with sums of integers that might push past 2 * 10⁹.
- You don't technically need the array since you can sum them on the fly, but having it is perfectly fine for such small constraints.

## Common Mistakes

- Using `int` for the sum, which causes overflow if the total exceeds 2,147,483,647.
