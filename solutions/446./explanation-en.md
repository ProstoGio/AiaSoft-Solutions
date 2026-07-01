# Explanation — 446. დაკარგული რიცხვი

## Approach

The goal is to find the missing number in a range from 1 to n when we're only given n-1 numbers. I used a frequency array to keep track of which numbers showed up in the bag. After reading all the inputs, I just scanned the frequency array until I hit the first index that was still zero. It's a simple counting approach that gets the job done without needing to sort anything or get clever with sums.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Instead of calculating the sum of 1 to n and subtracting the given numbers, which can sometimes risk overflow if n is huge, a frequency array is totally safe and straightforward.
- The frequency array size needs to accommodate n, so declaring it a bit larger than 1000 or using a dynamic vector keeps things safe.

## Common Mistakes

- Forgetting that the loop for the frequency array needs to go up to n, not just n-1, otherwise the missing number could be n itself.
