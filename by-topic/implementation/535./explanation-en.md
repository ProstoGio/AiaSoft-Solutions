# Explanation — 535. ყოვლისშემძლე რიცხვი

## Approach

If a number divides every element in the set, it must be less than or equal to the smallest number in the input. Since the number itself must also be present in the original set, the only possible candidate is the minimum element of the input array. I store all numbers in a set to handle duplicates and find the minimum quickly. Then, I just iterate through the set to check if every number is divisible by that minimum. If I find even one that isn't, the answer is -1.

## Complexity

| | |
|-|--|
| Time | O(N log N) |
| Space | O(N) |

## Key Insights

- The 'almighty' number must be the minimum value of the set.
- If the minimum doesn't divide everything else, no other number can.
- Using a set simplifies the check and handles duplicates automatically.

## Common Mistakes

- Forgetting to handle cases where no number satisfies the condition.
- Overcomplicating the logic by trying to find GCDs when a direct check is sufficient.

## Walkthrough

First, I read all inputs into a vector and simultaneously track the minimum value. I also insert them into a set to ignore duplicates. Once I have the minimum, I loop through the unique values in the set. If any element % min != 0, I immediately output -1 and exit. If the loop finishes, it means the minimum divides everything, so I print it.
