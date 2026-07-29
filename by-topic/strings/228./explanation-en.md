# Explanation — 228. წაშლილი მატრიცა

## Approach

Since we have a square matrix flattened into a string, the length of the string is simply n squared. To find the matrix dimensions, I just calculate the square root of the string length. The main diagonal elements in a flattened 1D array always appear at intervals of (n + 1). By jumping through the string with this step size, I pick up exactly the diagonal values and sum them up.

## Complexity

| | |
|-|--|
| Time | O(N) |
| Space | O(N) |

## Key Insights

- The diagonal elements are at indices 0, n+1, 2(n+1), etc.
- C++ strings allow easy char-to-int conversion by subtracting '0'.

## Common Mistakes

- Forgetting to handle the conversion from char to integer properly.
- Assuming the matrix is not square despite the problem implyng an n x n structure.

## Walkthrough

I read the whole string first. Then I take its size and compute n = sqrt(size). I start a loop from index 0 and increment by (n + 1) in each step. Inside, I convert the character to its integer value and add it to a running sum. Simple as that.
