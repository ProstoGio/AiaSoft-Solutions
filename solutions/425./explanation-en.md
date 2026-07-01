# Explanation — 425. სიმრავლეები

## Approach

The core difficulty here is that sets are nested and their internal order doesn't matter, meaning {a, b} is identical to {b, a}. To handle this, I recursively normalize every set into a 'canonical' form where its children are sorted string-wise. I use a simple stack-based parser to extract the top-level elements of any given string by tracking curly brace depth. Once I've recursively sorted every nested element, two sets are identical if and only if their normalized string representations match perfectly.

## Complexity

| | |
|-|--|
| Time | O(n² log n) |
| Space | O(n) |

## Key Insights

- Normalization is key: by sorting the children recursively, you turn a set into a unique, deterministic string.
- The stack-based depth counter is the standard way to split these nested structures without getting lost in the braces.

## Common Mistakes

- Forgetting that normalization needs to happen bottom-up, starting from the innermost sets.

## Walkthrough

For '{{}{}}', the outer loop extracts '{' and '{}'. The 'srt' function gets called on '{}', which is already atomic. Then it moves to the second one. Finally, it joins them in sorted order, creating a unique signature for the set, which makes it easy to increment a map counter.
