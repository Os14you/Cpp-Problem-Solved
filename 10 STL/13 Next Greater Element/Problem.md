# Next Greater Element

- Given an array, **for every number**, find the **first** number **after** it of a **higher value** .
  - E.g. [ 10, 5, 7, 15, 11 ] → [ 15 7 15 -1 -1 ]
    - First number greater than 10 ⇒ 15
    - First number greater than 5 ⇒ 7
    - First number greater than 7 ⇒ 15
    - First number greater than 15 and 11 ⇒ None, so use -1
- Input →    73 74 75 71 69 72 76 73
- Output → 74 75 76 72 72 76 -1 -1
- We can easily solve that with 2 nested loops and we can solve it with 1 loop using stack. Find it