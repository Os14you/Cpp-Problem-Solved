# Recamán's sequence

- **Recamán's sequence :**
- The first terms of this sequence are 0, 1, 3, 6, 2, 7, …
  - So last term value is 7 and its index is 5 (zero based)
  - The next value is either:
    - `LastValue - LastIndex - 1` if the following 2 conditions are satisfied:
      - value > 0 and It did not appear before
      - E.g. 7 (last value) - last index (5) - 1 = 7-5-1 = 1 (> 0 but already exists)
    - Or `LastValue + LastIndex + 1` = 7+5+1 = 13
      - Read integer zero-based index ([1, 200]) and print the value of this index.