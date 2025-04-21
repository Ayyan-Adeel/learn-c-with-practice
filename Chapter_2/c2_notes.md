<!-- C2 -->
---

# 📚 C Programming – Notes and Concepts

## 1. Data Type Notes:

- **`int`** and **`long`** can be the same size (e.g., 32-bit) depending on the **compiler** and **configuration**, even on 64-bit systems.
- Use `<limits.h>` to check ranges like `INT_MIN`, `INT_MAX`, `LONG_MIN`, `LONG_MAX`.
- VSCode uses compilers like GCC or MSVC that may default to 32-bit types unless specified.
- A 64-bit OS doesn’t guarantee that `long` is 64-bit—this depends on the compiler setup.

---

### ✅ Initializing `long` in C:

```c
long myLong = 123456789L;  // Use 'L' suffix to ensure it's treated as long
```

---

### ✅ Valid vs Invalid Type Declarations:

| Type            | Valid? | Description                         |
|-----------------|--------|-------------------------------------|
| `long long`     | ✅ Yes | Usually 64-bit, larger than `long`  |
| `double double` | ❌ No  | Invalid type in C                   |
| `long double`   | ✅ Yes | High-precision floating-point value |

- Use `LL`/`ll` for `long long` literals.
- Use `L` for `long double` literals.
- Print using `%lld` (long long), `%Lf` (long double).

---

## 2. Sequence Control Instructions

These determine **execution flow** in both programming and assembly:

1. **Sequential Execution** – Instructions run line by line.

2. **Branching** –  
   - *Conditional*: Executes based on conditions (`if`, `JZ`, `JNZ`).  
   - *Unconditional*: Jumps directly (`GOTO`, `JMP`).

3. **Looping** – Repeats instructions (`for`, `while`, etc.).

4. **Subroutine Calls** – Transfers control using `CALL`, returns with `RET`.

---

## 3. Assignment Examples

✅ **Valid**:  
```c
z = b * a;
```

❌ **Invalid**:  
```c
b * a = z;
```

---

## 4. Error-Prone Expressions

❗ **No implicit multiplication in C**:

```c
printf("The value of 4 * 5 is %d\n", 4.5);    // ❌ wrong format specifier
printf("The value of 4 * 5 is %d\n", (4)(5)); // ❌ invalid syntax
printf("The value of a * b = %f\n", ab);      // ❌ 'ab' is not valid
```

---

## 5. Exponentiation

⚠️ **C has no exponentiation operator** (`^` is bitwise XOR):

```c
printf("The value of a ^ b = %f\n", a ^ b); // ❌ wrong
pow(a, b); // ✅ correct from math.h
```

---

## 6. Operator Associativity (Left to Right)

```c
8 * 2 / 3 * 2
= 16 / 3 * 2
= 5 * 2
= 10
```

But with brackets:
```c
(8 * 2) / (3 * 2)
= 16 / 6
= 2
```

---
