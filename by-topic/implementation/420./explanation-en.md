# Explanation — 420. საფეხურები

## Approach

To solve this, we just need to calculate the total vertical distance traveled between floors. You go from a to b, which is |b-a| floors, and then from b to c, which is |b-c| floors. Since every floor transition has exactly N steps, we just multiply the total floor count by N. I used long long for the answer to be safe, although with the given constraints, it shouldn't overflow standard integers.

## Complexity

| | |
|-|--|
| Time | O(1) |
| Space | O(1) |

## Key Insights

- The total distance is simply (|b-a| + |b-c|) * N
- Floor order matters, so you have to calculate both segments of the trip

## Common Mistakes

- Forgetting to use absolute values if b is smaller than a or c
- Using int instead of long long, which might cause issues in some environments

## Walkthrough

Read N, a, b, c from input. Calculate the distance 'x' as (b-a) plus (b-c). Finally, multiply 'x' by 'n' and print the result.
