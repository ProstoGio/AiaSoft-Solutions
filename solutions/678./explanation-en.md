# Explanation — 678. დაშიფრული წერილი

## Approach

The trick here is to treat every sequence of digits as a distinct token while ignoring letters entirely. I used a nested loop structure where the inner loop grabs consecutive digits to build a string number. By shoving these into a `std::set`, I get uniqueness for free. Since my loop logic inevitably captures an empty string when it hits a letter (or reaches the end), I just subtract one from the set size at the end to get the actual count of numbers.

## Complexity

| | |
|-|--|
| Time | O(n²) |
| Space | O(n) |

## Key Insights

- Using a set is the easiest way to handle the uniqueness requirement without manually checking every past occurrence.
- The ASCII check 's[j] < 97' is a quick hack to identify digits since digits have lower ASCII values than lowercase letters.

## Common Mistakes

- Forgetting that an empty string gets inserted into the set when no digit is found at the current position, leading to an 'off-by-one' error in the final count.
