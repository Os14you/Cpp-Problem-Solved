# Active Robot

- Read integers N, M represents a matrix. A robot start at cell (0,0).
- Read integer K, then K commands. Each command is 2 values.
- Direction from 1 to 4: up, right, down, left.
- Steps: a number to number steps to take in the direction. Steps [1, 1000000000]
- If the robot hits the wall during the move, it circulates in the matrix.
- For every command, print where is the robot now.

#### Example 

```
    Input : 3 4   
    4  
    2 1  3 2  4 2  1 3
    >> (0,1)   (2,1)   (2,3)   (2,3)
```