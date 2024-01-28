# Fixed sliding window

- Read Integers K and N, (where K <= N). then read N < 200 integers.
- Find **sub-array** (consecutive numbers) of **K elements** that has **maximum sum**.
- Let’s list all sub-arrays of length 3
  - 1 0 3 ⇒ sum = 4
  - 0 3 -4 ⇒ sum = -1
  - 3 -4 2 ⇒ sum = 1
  - -4 2 -6 ⇒ sum = -8
  - 2 -6 9 ⇒ sum = 5
#### Example 
```
    Input: 3 7   1,0,3,-4,2,-6,9
    >> 5
```