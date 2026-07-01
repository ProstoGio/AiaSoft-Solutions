# Explanation — 897. სად არის პირველად?

## Approach

Since we need to find the first occurrence of a number among a million potential elements, searching linearly every time would be a disaster. Instead, I pre-processed the array into a fixed-size frequency array (or really, an index-tracking array). By checking if a number has been seen before only when we encounter it for the first time, we lock in its initial position in O(1) time. The rest of the queries just become simple lookups.

## Complexity

| | |
|-|--|
| Time | O(N + Q) |
| Space | O(MAX_VAL) |

## Key Insights

- Don't store the original array; just map the value directly to its first encountered index.
- Initialize your storage array with -1 so you know immediately if a number wasn't found without extra flags.

## Common Mistakes

- Re-scanning the entire array for every single query, which leads to TLE (Time Limit Exceeded).
