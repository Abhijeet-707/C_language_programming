# If-Else Statements: When Are Braces `{}` Required?

## Rule 1: Single Statement (Braces are Optional)

If an `if`, `else if`, or `else` block contains **only one statement**, you **do not need** curly braces `{}`.

### Example

```cpp
if (age >= 18)
    cout << "Eligible";
```

This is equivalent to:

```cpp
if (age >= 18) {
    cout << "Eligible";
}
```

Both programs produce the same output.

---

## Rule 2: Multiple Statements (Braces are Required)

If a block contains **more than one statement**, you **must use** curly braces `{}`.

### Correct Example

```cpp
if (age >= 18) {
    cout << "Eligible";
    cout << "You can vote.";
}
```

### Wrong Example

```cpp
if (age >= 18)
    cout << "Eligible";
    cout << "You can vote.";   // This is NOT part of the if block
```

Only the first statement belongs to the `if`. The second statement executes every time.

---

# `if`, `else if`, and `else` Without Braces

## Example

```cpp
if (marks >= 90)
    cout << "Grade A";
else if (marks >= 75)
    cout << "Grade B";
else
    cout << "Grade C";
```

This is perfectly valid because each block contains only **one statement**.

---

# One-Line If Statement

You can write an `if` statement on one line.

```cpp
if (x > 0) cout << "Positive";
```

---

# One-Line If-Else Statement

You can also write `if-else` on a single line.

```cpp
if (x > 0) cout << "Positive";
else cout << "Negative";
```

---

# One-Line If-Else If-Else Statement

```cpp
if (marks >= 90) cout << "A";
else if (marks >= 75) cout << "B";
else cout << "C";
```

Although valid, writing everything on one line is **not recommended** because it reduces readability.

---

# When Must You Use Braces?

Use braces `{}` when:

- There are **two or more statements** inside the block.
- You want your code to be clearer and easier to maintain.
- Your coding standard requires braces.

Example:

```cpp
if (x > 0) {
    cout << "Positive";
    x++;
}
```

---

# Best Practice

Even though braces are optional for a single statement, many professional programmers **always use braces**.

Example:

```cpp
if (x > 0) {
    cout << "Positive";
}
else {
    cout << "Negative";
}
```

This helps avoid bugs when new statements are added later.

---

# Summary

| Condition | Braces Needed? |
|-----------|----------------|
| One statement inside `if` | ❌ Optional |
| One statement inside `else if` | ❌ Optional |
| One statement inside `else` | ❌ Optional |
| Two or more statements | ✅ Required |
| Professional coding style | ✅ Recommended |

---

# Key Points to Remember

✅ `if` always requires parentheses `()` around the condition.

```cpp
if (x > 10)
```

❌ Incorrect:

```cpp
if x > 10
```

---

✅ Curly braces `{}` are optional **only when there is one statement**.

```cpp
if (x > 10)
    cout << "Greater";
```

---

✅ Curly braces `{}` are **required** for multiple statements.

```cpp
if (x > 10) {
    cout << "Greater";
    x++;
}
```

---

## Final Tip

**Condition → Always use parentheses `()`**

**Statements → Braces `{}` are optional for one statement, required for multiple statements.**

For cleaner and safer code, many developers always use braces even for a single statement.