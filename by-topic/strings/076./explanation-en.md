# Explanation — 076. ეგოისტი ბავშვები

## Approach

The core of the problem is realizing that if we combine all the symbols from both boxes, every single character type must appear an even number of times to be split equally. I just used a frequency array of size 122 to map the ASCII values of the characters and dumped all counts into it. If any character ends up with an odd count after tallying both strings, it's impossible to give Luka and Akaki identical sets, so I immediately print 'no' and exit.

## Complexity

| | |
|-|--|
| Time | O(n + m) |
| Space | O(1) |

## Key Insights

- If the total count of any character across both boxes is odd, you can't distribute them into two equal halves.
- The exact order of characters doesn't matter, only their frequencies, which makes an array-based counter perfect here.

## Common Mistakes

- Forgetting to check the full range of ASCII characters or thinking you need to actually sort the strings.
