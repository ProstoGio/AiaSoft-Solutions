# Explanation — 853. გამოკლება ლაშას წესით

## Approach

The problem asks us to parse strings in 'x-y' format and apply a custom subtraction rule. Since the input is simple, I just split each string at the '-' character to separate the two numbers. After converting these substrings into integers, I compare them and output zero if the second number is larger than the first. Otherwise, I just print the standard difference.

## Complexity

| | |
|-|--|
| Time | O(N * L) where N is the number of examples and L is the string length. |
| Space | O(L) to store the current string and parsed numbers. |

## Key Insights

- Input is given as a string, so scanning for the '-' delimiter is the easiest way to extract the operands.
- Lasha's logic is just max(0, x - y), which simplifies the calculation significantly.

## Common Mistakes

- Forgetting to handle the EOF condition correctly when reading unknown amounts of lines.
- Overcomplicating the string parsing instead of using simple character checks.

## Walkthrough

I loop through the input lines until they end. For each line, I track a boolean flag to know when I've passed the '-' character. I build two strings, parse them to ints manually—though std::stoi would work too—and then apply the if-else condition. Simple as that.
