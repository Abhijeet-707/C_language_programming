# Hierarchy Concept (Operator Precedence)

## What is Hierarchy?

In programming, **Hierarchy** (also called **Operator Precedence**) is the order in which operators are evaluated in an expression.

Operators with **higher precedence** are evaluated **before** operators with lower precedence.


# Logical Operator Hierarchy

Among logical operators:

| Operator | Meaning | Precedence |
|----------|---------|------------|
| `!` | NOT | Highest |
| `&&` | AND | Higher |
| `\|\|` | OR | Lower |

This means:

```
&& is evaluated before ||

```
---

# BODMAS FOR MATHEMATICAL OPERATIONS

**BODMAS** stands for:

| Letter | Meaning |
|--------|---------|
| **B** | Brackets `()` |
| **O** | Orders (Powers/Exponents) `^` |
| **D** | Division `/` |
| **M** | Multiplication `*` |
| **A** | Addition `+` |
| **S** | Subtraction `-` |

---

# BODMAS Hierarchy

```text
Brackets ()
      ↓
Orders (^)
      ↓
Division (/)
      ↓
Multiplication (*)
      ↓
Addition (+)
      ↓
Subtraction (-)
```

---

# Left-to-Right Rule

When **two operators have the same precedence**, the expression is evaluated **from left to right**.

This rule applies to:

- Division `/` and Multiplication `*`
- Addition `+` and Subtraction `-`

---

## Example 1

```CPP
20 / 5 * 2
```

Both `/` and `*` have the same precedence.

Evaluate from **left to right**:

```text
20 / 5 = 4
4 * 2 = 8
```

**Answer:**

```text
8
```

---

## Example 2

```cpp
10 - 4 + 2
```

`+` and `-` have the same precedence.

Evaluate from **left to right**:

```text
10 - 4 = 6
6 + 2 = 8
```

**Answer:**

```text
8
```

---

## Example 3

```cpp
30 / 5 * 4 / 2
```

Evaluate from **left to right**:

```text
30 / 5 = 6
6 * 4 = 24
24 / 2 = 12
```

**Answer:**

```text
12
```

---
