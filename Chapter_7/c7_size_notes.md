<!-- C7 -->
---

## 1. What is `size_of`?

- It `returns` **size of any object in `bytes`**. 
- **Retrives size** of different data types and variables in `an architecture` 

### Use case?

- Perform **size related operations** like *storing length of an array.*
```c
size_t length = sizeof(arr) / sizeof(arr[0]); // arr length = total arr size / each arr element size
```

### Example: `sizeof(int), sizeof(float)`, etc.

---

# 2. Understanding `size_t` in C

---

## 🔹 What is `size_t`?

- `size_t` is a special number used in C to **count things** – like *how many toys in a box*📦 or *letters in a word* 🔤
- You can't have -5 toys, right? So, it **can’t be negative**.
- Computer uses it to **know how big something is**, or **how many times** to do something safely (like in loops or memory work).

---

### 👩‍💻 Behind the scenes:

- `size_t` is an **unsigned data type** that stores the **size of an object in bytes**.
-  **with `return type` of `sizeof`** used in functions like `malloc()`, `strlen()`, etc.
- Comes from the headers: `stddef.h` and `stdio.h`.

> 🖥️ On a 32-bit system → it's usually `unsigned int`  
> 💻 On a 64-bit system → it's usually `unsigned long`

---

## 🔹 Why use it?

- **Architecture-compatible** (32-bit or 64-bit).
- **No negatives** (safe for sizes/indices).
- Ideal for loops, array indexing, **memory sizes**.

---

## 🔹 Basic Use

```c
#include <stdio.h>

int main() {
    size_t count;
    printf("Enter a number: ");
    scanf("%zu", &count);  // Use %zu as format specifier for size_t
    printf("You entered: %zu\n", count);
}
```

---

## 🔹 Smart Input Handling

```c
#include <stdio.h>

int main() {
    long input;
    scanf("%ld", &input);

    if (input < 0) input = -input; // Auto-correct
    size_t count = (size_t)input;

    printf("Final count: %zu\n", count);
}
```

---

## 📝 Summary

| Feature          | Detail                              |
|------------------|-------------------------------------|
| Data Type        | `size_t`                            |
| Format Specifier | `%zu`                               |
| Safer Input      | Read as `long`, check/correct, cast |

---
