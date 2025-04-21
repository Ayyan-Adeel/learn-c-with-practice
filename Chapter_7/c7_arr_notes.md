<!-- C7 -->
---

# 📘 Array Notes

---

## 1. 📌 Array to Pointer Decay

In C, when you declare an array like `int marks[5];`, the array name `marks` represents the address of the first element — i.e., `&marks[0]`.

So, these two are functionally **equivalent**:
```c
int *ptr = marks;
int *ptr = &marks[0];
```
Both allow you to access array elements using pointer arithmetic. This automatic conversion is called **array-to-pointer decay** — it happens when an array is used in expressions or passed to functions.

---

## 2. 📥 Passing Arrays to Functions

When you pass an array to a function like this:
```c
void printArray(int ptr[], int n);
```
It’s **equivalent** to:
```c
void printArray(int *ptr, int n);
```

Why? Because arrays **decay into pointers** when passed to functions. So both forms mean the function receives a pointer to the first element of the array. You can then use `ptr[i]` or pointer arithmetic to access each element.

### ✅ Example:
```c
printf("Element %d | value: %d\n", i + 1, ptr[i]);
```

---

## 3. 🤔 `i + 1` vs `i++` in `printf`

Let’s look at this line:
```c
printf("Student %d | marks in subject %d is: %d\n", i + 1, j + 1, marks[i][j]);
```

- `i + 1` and `j + 1` are **just expressions**. They compute values based on the current `i` and `j` but do **not** change their original values.
- If you want to actually change `i` or `j`, use `i++` or `j++` (post-increment) or `++i` (pre-increment).
- So, `i` and `j` remain unchanged after this line — you're just **printing incremented values**, not modifying them.

📝 **Tip:** Use `i + 1` for **display purposes** (like showing Student 1 instead of Student 0), and `i++` if you actually want to update `i`.

---

## 4. 🌟 `%nd` formatting trick in `printf`:

- `n` → means **minimum width** the number will be **right-aligned**.
- `d` → means it's an integer.

### Example `%-2d`:

- `2` → is **minimum width**.
- `-` → means **left-align** the number within width: `2`.
- `d` → means it's an integer.

Like here `Student 1` to `Student 99`, it'll keep alignment nice, but later if you have `Student 100`, it'll mess up the layout.

### Example: `printf("Student %-2d | Marks: %d", s, m);`

```
Student 1  | Marks: 78
Student 10 | Marks: 90
```

Without it, things can get jagged. It's cleaner when numbers grow beyond 1 digit. 

### Try it with `-%3d`, **right-aligned `%2d`** and compare.

---
