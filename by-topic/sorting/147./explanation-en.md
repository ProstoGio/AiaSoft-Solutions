# Explanation — 147. განსხვავებული რიცხვების რაოდენობა 1

## Approach

When I first saw this, I thought about using a hash set, but sorting is way more intuitive for this constraint range. Once you sort the numbers, all the identical ones end up sitting right next to each other. I just kept a running variable to track the 'last seen' number and incremented my counter whenever the current value broke that sequence. It's a clean way to avoid extra memory overhead.

## Complexity

| | |
|-|--|
| Time | O(n log n) |
| Space | O(n) |

## Key Insights

- Sorting turns an unordered mess into a predictable sequence where duplicates are neighbors.
- You don't need a map or a set here; comparing current elements with the last unique one is enough.

## Common Mistakes

- Starting the counter at zero instead of one, which fails when the input has exactly one distinct number.
