# 📊 Common C Data Types and Their Storage Capacity

## Basic Rules

| Description | Value |
|------------|--------|
| 8 bits | 1 byte |
| n bits | 2ⁿ possible values |

---

## Common C Data Types

| Data Type | Bytes | Bits | Total Storable Values | Value Range |
|-----------|-------|------|----------------------|-------------|
| `char` | 1 | 8 | 2⁸ = 256 | -128 to 127 |
| `unsigned char` | 1 | 8 | 2⁸ = 256 | 0 to 255 |
| `short int` | 2 | 16 | 2¹⁶ = 65,536 | -32,768 to 32,767 |
| `unsigned short int` | 2 | 16 | 2¹⁶ = 65,536 | 0 to 65,535 |
| `int` | 4 | 32 | 2³² = 4,294,967,296 | -2,147,483,648 to 2,147,483,647 |
| `unsigned int` | 4 | 32 | 2³² = 4,294,967,296 | 0 to 4,294,967,295 |
| `long int` | 4 | 32 | 2³² = 4,294,967,296 | -2,147,483,648 to 2,147,483,647 |
| `unsigned long int` | 4 | 32 | 2³² = 4,294,967,296 | 0 to 4,294,967,295 |
| `long long int` | 8 | 64 | 2⁶⁴ = 18,446,744,073,709,551,616 | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `unsigned long long int` | 8 | 64 | 2⁶⁴ = 18,446,744,073,709,551,616 | 0 to 18,446,744,073,709,551,615 |
| `float` | 4 | 32 | Approximately 2³² values | ±3.4 × 10³⁸ |
| `double` | 8 | 64 | Approximately 2⁶⁴ values | ±1.7 × 10³⁰⁸ |
| `long double` | 16* | 128* | Implementation-dependent | Greater precision than `double` |

---

## Memory Size Reference

| Bits | Bytes | Total Possible Values |
|------|-------|----------------------|
| 8 | 1 | 2⁸ = 256 |
| 16 | 2 | 2¹⁶ = 65,536 |
| 32 | 4 | 2³² = 4,294,967,296 |
| 64 | 8 | 2⁶⁴ = 18,446,744,073,709,551,616 |

---

## Example

### Short Integer

```c
short int num;
```

- Size = 2 Bytes
- Bits = 16
- Total Values = 2¹⁶ = 65,536
- Range = -32,768 to 32,767

### Integer

```c
int num;
```

- Size = 4 Bytes
- Bits = 32
- Total Values = 2³² = 4,294,967,296
- Range = -2,147,483,648 to 2,147,483,647