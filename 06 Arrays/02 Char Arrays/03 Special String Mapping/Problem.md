# Special String Mapping

- Read a string and do the following conversions for its letters
  - If it is an upper letter, don’t change .
  - If it is lower letter, use this map of 26 letters:
    - abcdefghijklmnopqrstuvwxyz
    - YZIMNESTODUAPWXHQFBRJKCGVL
        - E.g. a ⇒ Y and z ⇒ L
  - If it is digit, use this map of 10 letters:
    - 0123456789
    - !@#$%^&*()
#### Example
```
    Input : 8acMNmn39
    >> (YIMNPW$)
```