# Replace substring

- Implement this function
  - `string replace_str(string input, string pattern, string to);`
    - Constraints: Input consists only of lower cases, len(pattern) > 0, len(to) >= 0
- The function replaces every pattern with to and return it
  - Input: “aabcabaaad”, “aa”, “x” - Return: “xbcabxad”
  - Input: “aabcabaaad”, “aa”, “aaaa” - Return: “aaaabcabaaaaad”
  - Input: “aabcabaaad”, “aa”, “” - Return: “bcabad”
- Let your code makes use of another function:
  - `bool starts_with(string input, string pattern, int pos);`
  - Return true if string input has the pattern starting from pos

#### 01 Example

```
    Input : “aabcabaaad”, “aa”, 0
    >> True
```

#### 02 Example

```
    Input : “aabcabaaad”, “aa”, 1
    >> False
```