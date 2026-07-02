# Explanation — 043. მასივის ქვესეგმენტის შეტრიალება

## Approach

To reverse a subsegment, you don't really need a fancy algorithm; a simple two-pointer swap is perfect. Just plant one pointer at the start (l) and one at the end (r). Swap the elements sitting at these positions, move the pointers toward the center, and keep repeating until they cross paths. It’s cleaner than allocating a whole new array or using extra library functions.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- The `while(l < r)` loop is the engine here; it automatically stops exactly when the subsegment is mirrored.
- Using a temporary variable for the swap is standard, though you could use `std::swap` for a slightly more modern look.

## Common Mistakes

- Forgetting that problem indices might be 0-based, which can lead to off-by-one errors if the input is 1-based.
