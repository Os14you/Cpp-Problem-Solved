# Grid Sum

- Given a 2D array of numbers, all of them are positive distinct. Robot start from (0, 0). 
- It can move to the right or bottom or diagonal. See the arrows.
- It will select one direction: the maximum. Print the total path sum of this robot
  - `int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)`

#### Example
```
    Input : 3 3
    1 7 8
    2 10 11
    20 5 9
    >> 31    #( 1 + 10 + 11 + 9)
```