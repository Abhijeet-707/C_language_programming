# 🔤 Character Data Type (`char`) in C Language

## 📌 What is Character Data Type?

The `char` data type is used to store a **single character** such as:

```c
'A'
'B'
'a'
'1'
'@'
'#'
```

---

## 📝 Format Specifier

The format specifier for the character data type is:

```c
%c
```

### Example

```c
char grade = 'A';

printf("%c", grade);
```

### Output

```
A
```

---

# 🔢 ASCII Values

ASCII (American Standard Code for Information Interchange) assigns a numeric value to every character.

---

## 🔠 ASCII Values for Capital Letters (A-Z)

| Character | ASCII Value |
|------------|------------|
| A | 65 |
| B | 66 |
| C | 67 |
| D | 68 |
| E | 69 |
| F | 70 |
| G | 71 |
| H | 72 |
| I | 73 |
| J | 74 |
| K | 75 |
| L | 76 |
| M | 77 |
| N | 78 |
| O | 79 |
| P | 80 |
| Q | 81 |
| R | 82 |
| S | 83 |
| T | 84 |
| U | 85 |
| V | 86 |
| W | 87 |
| X | 88 |
| Y | 89 |
| Z | 90 |

### 📌 Range

```text
A - Z = 65 - 90
```

---

## 🔡 ASCII Values for Small Letters (a-z)

| Character | ASCII Value |
|------------|------------|
| a | 97 |
| b | 98 |
| c | 99 |
| d | 100 |
| e | 101 |
| f | 102 |
| g | 103 |
| h | 104 |
| i | 105 |
| j | 106 |
| k | 107 |
| l | 108 |
| m | 109 |
| n | 110 |
| o | 111 |
| p | 112 |
| q | 113 |
| r | 114 |
| s | 115 |
| t | 116 |
| u | 117 |
| v | 118 |
| w | 119 |
| x | 120 |
| y | 121 |
| z | 122 |

### 📌 Range

```text
a - z = 97 - 122
```

---

# 🎯 ASCII Values for Special Characters

| Character | ASCII Value |
|------------|------------|
| Space | 32 |
| ! | 33 |
| " | 34 |
| # | 35 |
| $ | 36 |
| % | 37 |
| & | 38 |
| ' | 39 |
| ( | 40 |
| ) | 41 |
| * | 42 |
| + | 43 |
| , | 44 |
| - | 45 |
| . | 46 |
| / | 47 |
| : | 58 |
| ; | 59 |
| < | 60 |
| = | 61 |
| > | 62 |
| ? | 63 |
| @ | 64 |
| [ | 91 |
| \ | 92 |
| ] | 93 |
| ^ | 94 |
| _ | 95 |
| ` | 96 |
| { | 123 |
| \| | 124 |
| } | 125 |
| ~ | 126 |

### 📌 Special Character ASCII Ranges

```text
32 - 47
58 - 64
91 - 96
123 - 126
```

### Example

```c
char symbol = '@';

printf("%d", symbol);
```

### Output

```
64
```

---

# 📊 ASCII Character Categories

| Category | ASCII Range |
|-----------|-------------|
| Special Characters | 32 - 47 |
| Digits (0-9) | 48 - 57 |
| Special Characters | 58 - 64 |
| Capital Letters (A-Z) | 65 - 90 |
| Special Characters | 91 - 96 |
| Small Letters (a-z) | 97 - 122 |
| Special Characters | 123 - 126 |

---

# 💡 Getting ASCII Value of a Character

If you want to print the ASCII value of a character, use the **integer format specifier `%d`**.

### Example

```c
#include <stdio.h>

int main()
{
    char x = 'A';

    printf("%d", x);

    return 0;
}
```

### Output

```
65
```

---

# ⚠️ Important Notes

✅ Character format specifier:

```c
%c
```

✅ To print ASCII value:

```c
%d
```

✅ Capital letters ASCII range:

```text
65 - 90
```

✅ Small letters ASCII range:

```text
97 - 122
```

✅ Digits ASCII range:

```text
48 - 57
```

✅ Special characters ASCII ranges:

```text
32 - 47
58 - 64
91 - 96
123 - 126
```

---

# 🚀 Quick Revision

| Item | Value |
|--------|--------|
| Character Data Type | `char` |
| Character Format Specifier | `%c` |
| ASCII Value Format Specifier | `%d` |
| A-Z Range | 65 - 90 |
| a-z Range | 97 - 122 |
| 0-9 Range | 48 - 57 |
| Special Characters Range | 32-47, 58-64, 91-96, 123-126 |
| Example Character | `'A'` |
| ASCII of 'A' | 65 |
