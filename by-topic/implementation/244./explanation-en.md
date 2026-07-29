# Explanation — 244. ჩეთბოტი

## Approach

This problem is straightforward: you just need to count how many lines end with a question mark and how many don't. Since the input format involves reading a number followed by lines of text, I used getline to capture full strings, including spaces. The core logic simply checks the last character of every string. If it's a '?', we increment the question counter; otherwise, it's an answer.

## Complexity

| | |
|-|--|
| Time | O(N * L) |
| Space | O(L) |

## Key Insights

- The cin >> n leaves a newline character in the buffer, which is why I used n++ to effectively consume that leftover empty line.
- Checking the last character of a string is safe here because the input constraints imply each message has at least some content.

## Common Mistakes

- Forgetting to handle the trailing newline after reading the integer N.
- Using cin >> s instead of getline, which would break on spaces.

## Walkthrough

Read the integer N. Increment it to consume the buffer's newline. Loop through the input, reading each line into a string. If the last index of the string is '?', count it as a question. Otherwise, increment the answer count. Print both values.
