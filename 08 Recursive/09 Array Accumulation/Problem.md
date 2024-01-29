# Array Accumulation

- Given an array we want to accumulate it as following:
  - Input 1 2 3 4 5 6
  - Output array
    - 1, 1+2, 1+2+3, 1+2+3+4, 1+2+3+4+5, 1+2+3+4+5+6
    - 1, 3, 6, 10, 15, 21
  - That is return arr[i] = sum of all numbers from 0 to i
- `void accumulate_arr(int arr[], int len);`

#### Example
```
    Input : 1 8 2 10 3
    >> 1 9 11 21 24
```