# Flatten 3D Array

- Read 3 numbers: DEPTH, ROWS, COLS the dimensions of 3D array
- Then read integer either 1 (convert 3D to 1D) or 2 (1D to 3D)
- If input was 1, then read 3 integers d, r, c then convert to position in 1D array
- If input was 2, then read 1 integer position, then convert to 3D array position

#### 01 Example 

```
    Input : 3 4 5   
    1    
    1 0 0
    >> 20
```

#### 02 Example 

```
    Input : 3 4 5   
    2
    20
    >> 1 0 0
```