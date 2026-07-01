# Explanation — 311. ძლიერი სამეფო

## Approach

Since we need to check if every city is reachable from every other city within a time limit T, this is essentially a classic all-pairs shortest path problem. With N up to 500, running Dijkstra from every node is a solid move. Each Dijkstra run tells us the distances from a single source to all others. If any distance exceeds T or remains at our infinity constant, we know immediately the kingdom isn't 'strong' enough.

## Complexity

| | |
|-|--|
| Time | O(N * (N^2 + M)) |
| Space | O(N + M) |

## Key Insights

- Running N separate Dijkstra instances is efficient enough here since N is only 500 and the edge weights are positive.
- The use of a simple array-based priority queue in the Dijkstra implementation works perfectly for a dense graph where M can be up to 10^5.

## Common Mistakes

- Forgetting to check if a city is totally unreachable, which leaves the distance at INF.
- Using an incorrect INF constant; since T can be 10^9, using a standard 10^6 integer would cause logic errors.

## Walkthrough

If we have cities 1, 2, and 3 with T=5, we call Dijkstra(1). If it returns d[2]=3 and d[3]=4, we're good so far. We then repeat for source 2 and 3. If any d[j] > 5, we instantly exit with 'no'.
