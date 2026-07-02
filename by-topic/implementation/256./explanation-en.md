# Explanation — 256. რიცხვის ძიება მასივში - 1

## Approach

When I first looked at this, my immediate thought was to just walk through the array. Since we only need to know if the number exists, scanning from index 0 to N-1 is the most straightforward way. Even though the problem mentions the array is sorted, which screams binary search, a simple linear scan is fast enough given the 2-second time limit. I just check every element against x and bail out early the moment I find a match.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Linear search is perfectly fine here because N=10^6 and the time limit is generous enough for simple iterations.
- Returning early as soon as the element is found saves unnecessary cycles.

## Common Mistakes

- Overthinking and trying to force binary search when O(n) passes easily.

## Walkthrough

If the array is [1, 3, 5] and we look for 3, the loop hits index 0 (1!=3), then index 1 (3==3). It prints 'YES' immediately and the program terminates, ignoring the rest of the array.
