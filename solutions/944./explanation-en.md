# Explanation — 944. გაეროს შიფრი

## Approach

The core idea is to reverse the Caesar-style shift by subtracting the specific offset for each character position. Since the cipher adds (k * i) to the character index, we just need to subtract it back and handle the circular alphabet wrap-around using modulo arithmetic. I extract 'k' from the last character of the input string and then loop through the string to perform the reverse shift for each index. Using '+26' before the modulo operation ensures we don't get negative results when subtracting the shift.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- The shift depends on the index, so you must track (i+1) for each character position.
- Always add 26 before taking modulo 26 when subtracting, otherwise you'll land on negative index values.

## Common Mistakes

- Forgetting that the problem uses 1-based indexing for the i-th letter calculation.
- Incorrectly parsing the 'k' digit from the string buffer.

## Walkthrough

First, I store the whole input string and isolate the last character as an integer 'k'. Then I iterate through the string up to the second-to-last character. For every character, I calculate the shift as (current_index * k) % 26, subtract that from the character's ASCII position relative to 'A', and map it back to the alphabet.
