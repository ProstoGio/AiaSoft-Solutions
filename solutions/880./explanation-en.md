# Explanation — 880. გრძელი მოედანი

## Approach

This one is basically just putting two shapes together. You have a central rectangle with a width of 2r and a length of x, and the two semicircles on the sides combine to make one full circle with radius r. Adding the rectangle's area (2r * x) to the circle's area (πr²) gives you the total area of the field. I just used the constant from the math library for pi to make sure the precision stays high enough for the test cases.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The two semicircles are identical, so you can just treat them as a single circle with area πr².
- The width of the rectangle is simply the diameter of the semicircles, which is 2*r.

## Common Mistakes

- Forgetting to output exactly four decimal places using fixed and setprecision.
- Calculating the rectangle's width as just r instead of 2r.
