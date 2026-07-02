# Explanation — 829. კატო და საყვარელი სიმბოლოები

## Approach

The trick here is ignoring case sensitivity right from the start by smashing both input strings into lowercase. Since Kato might list the same character multiple times in her 'favorites' string, I built a unique list to avoid counting the same occurrences twice. Once I had my clean, unique set of characters, it was just a matter of nested loops—checking every character in the sign against my target set and bumping a counter every time I got a match.

## Complexity

| | |
|-|--|
| Time | O(|S| * |K|) |
| Space | O(|K|) |

## Key Insights

- Case insensitivity means transforming strings to lower or upper case immediately simplifies everything.
- Filtering the favorite character list into a unique set prevents double-counting if the input string K has duplicates.

## Common Mistakes

- Forgetting to handle duplicate characters in the favorites string, which would cause an inflated count.
