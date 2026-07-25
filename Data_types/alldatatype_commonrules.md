# 🌟 Variable Naming Rules in C Language

## 📌 Rules for Naming Variables

1. Variables can start with:
   - Alphabet (`A-Z` or `a-z`)
   - Underscore (`_`)

2. Variables cannot start with:
   - Numbers (`0-9`)

3. Special characters are not allowed except:
   - Underscore (`_`)

4. Spaces or commas are not allowed in variable names.

5. C keywords cannot be used as variable names.

6. Variable names are case-sensitive.

---

# 📚 C Keywords (Reserved Words)

## ❗ These keywords cannot be used as variable names.

```text
auto       double      int        break      extern
enum       unsigned    while      case       sizeof
for        const       static     long       continue
float      else        signed     do         short
switch     char        volatile   default    goto
struct     if          union      return     void
register   typedef
```

---

# ⚠️ Important Note About Keywords

- Keywords are reserved only in their exact form.
- Capital letters can make them different variable names.
- Small modifications like underscore `_` also make them valid.

## ✅ Allowed Variable Names

```text
FLOAT
Float
flo_at
IntValue
```

## ❌ Not Allowed Variable Names

```text
float
int
for
while
```

---

# 🎯 Summary

| Rule | Allowed |
|---|---|
| Start with alphabet | ✅ Yes |
| Start with underscore `_` | ✅ Yes |
| Start with number | ❌ No |
| Spaces allowed | ❌ No |
| Special characters allowed | ❌ No |
| Use keywords as variable names | ❌ No |
| Case-sensitive | ✅ Yes |

---