# Explanation — 702. ჰანოის კოშკი

## Approach

This is a classic recursion problem where you need to move a stack of disks from rod 1 to rod 3. The key is breaking down the task: move n-1 disks to the auxiliary rod, move the largest disk to the target, then move the n-1 disks from the auxiliary to the target. My function uses three rods as parameters—source, spare, and target—swapping their roles in each recursive call. It handles the base case of one disk by moving it directly. The recursion automatically manages the sequence for any N.

## Complexity

| | |
|-|--|
| Time | O(2^N) |
| Space | O(N) |

## Key Insights

- The recurrence relation is T(n) = 2*T(n-1) + 1, resulting in 2^N - 1 moves.
- The role of the 'spare' rod changes depending on whether you are moving the stack to the target or moving it out of the way.

## Common Mistakes

- Swapping the parameters in the recursive calls incorrectly.
- Confusing the roles of the three rods during the second recursive step.

## Walkthrough

Start by calling hanoi(n, 1, 2, 3). If n is 1, just print '1 1 3'. If n > 1, first move the top n-1 disks from 1 to 2, using 3 as a buffer. Then, move disk n directly from 1 to 3. Finally, move those n-1 disks from 2 to 3 using 1 as a buffer.
