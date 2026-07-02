# Explanation — 145. სამკუთხედის ფართობი (კოორდინატებით)

## Approach

When I first looked at this, the most natural way to calculate the area of a triangle with known coordinates seemed to be Heron's formula. I defined a Point struct to handle the coordinates and a Triangle struct to manage the side lengths. Once the distances between the vertices were calculated using the distance formula, I just plugged them into Heron's formula to get the area. It’s definitely not the shortest code possible—there's a slicker 'shoelace' formula—but this way is incredibly intuitive and less prone to logic slips if you're comfortable with basic geometry.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- Heron's formula works perfectly here since the coordinates define the side lengths exactly.
- Using double precision floating-point numbers is mandatory to handle the square roots and division required by the formula.

## Common Mistakes

- Forgetting to output with fixed precision, which might lead to wrong formatting on the judge.
- Calculating the semi-perimeter incorrectly or mixing up the variable names in the square root.
