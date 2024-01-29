# How many primes

- Read 2 integers N and M, then Read matrix NxM.
- Then read integer Q, for Q queries.
- For each query read 4 integers: i j r c
- Represents a grid (submatrix): top left (i, j) and (r, c) for (# rows, # cols)
- For each query, print how many prime numbers in the requested grid.
- **Each query should be answered using a nested loop maximum not more.**
#### Example
```
    Input : 2 3
    1 2 3
    4 5 6
    2
    0 0 1 1
    >> 2
    0 0 1 2
    >> 3
```