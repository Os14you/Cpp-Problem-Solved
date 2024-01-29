# Smaller row?

- Read integers N, M, then Read matrix N x M. Then read Q for Q queries.
- Each query is 2 integers: first and 2nd row indices (1-based)
- Compare the 2 rows and print YES if first row < 2nd for all the row values
#### Example
```
    Input : 2 4
    1 2 3 4
    5 6 7 8
    2
    1 2
    >> YES
    2 1
    >> NO
```