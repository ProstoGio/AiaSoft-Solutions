# Explanation — 365. გაასწორეთ წინადადება

## Approach

The main goal here is to filter out extra spaces while keeping the words intact. I grabbed the input using getline since spaces matter here. My loop just checks each character; if it's not a space, I toss it straight into my answer string. If it is a space, I only add it to the answer if the previous character wasn't already a space, which keeps the spacing clean.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Checking the previous character (s[i-1]) is the simplest way to track the state of the string without needing a flag variable.
- Using getline instead of cin is a must, otherwise you'll lose the rest of the sentence after the first space.

## Common Mistakes

- Forgetting to check the bounds of s[i-1] when i is 0, though in this case, the logic naturally handles the first character correctly.
