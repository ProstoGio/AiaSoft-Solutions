# Explanation — 901. ერთის დამატება

## Approach

Since the input can reach 10^1000, standard integers will overflow instantly. We have to treat the number as a string. The logic is basically manual addition: check the last digit; if it's not a '9', just increment it and you're done. If it is a '9', we carry over the value to the left until we hit a non-'9' digit, turning all those '9's into '0's. If the entire string consists of '9's, we print a '1' followed by as many zeros as the original string length.

## Complexity

| | |
|-|--|
| Time | O(n) |
| Space | O(n) |

## Key Insights

- Don't even try to parse this as a number; string manipulation is the only way to handle 10^1000.
- The 'all nines' case is the only time the number of digits actually changes.

## Common Mistakes

- Using unsigned long long or stringstream, which will both crash for these massive inputs.
