<!-- C8 -->
---

# 1. 📚 Quick Definitions

- **Buffer**: A chunk of **temporary memory or space** used to store input from terminal (like string `name[20]`).
- **Bounds**: The **limit** of how much the buffer can hold (e.g., `20` characters).
- **Signed**: A variable that can store **both** negative and positive values (e.g., `-10` to `+10`).
- **Unsigned**: A variable that can store only **positive values** (e.g., `0` to `255`), useful for safe character handling.

---

# 2. 🧵 String Input in C – The Safe Way

---

## 🚫 Avoid This: `gets(name);`
```c
gets(name);
```

- It takes input from the keyboard.
- ❗ **Problem**: It doesn’t check how much `buffer` is available.
- If you type **too much**, it **overflows** into memory it shouldn’t touch — this is called a **buffer overflow**.

---

## ✅ Use This Instead: `fgets(name, sizeof(name), stdin);`
```c
fgets(name, sizeof(name), stdin);
```

### ✅ Why This Is Safe:

| Part              | What It Means                             |
|-------------------|-------------------------------------------|
| `name`            | The variable (string) to store input      |
| `sizeof(name)`    | How much space (`buffer size`) is allowed |
| `stdin`           | Standard input (your keyboard)            |

- `fgets` reads **within bounds** (max space available).
- It stops at Enter (`\n`) or when space is full.
- Includes the newline at the end (`\n`) — you can trim it.

✅ **Safe** for storing input without crashing your program!

---

## 💁‍♀️ About This: `isspace((unsigned char)str[start])`
```c
while (isspace((unsigned char)str[start]))
```

- `isspace()` checks if a character is **space**, **tab**, or **newline**.

### 🤔 But why `unsigned char`?:

Characters in C are stored as numbers. On some systems, a `char` may store **negative values**.

- ✅ `isspace()` only works **safely** on **positive values** (`0` to `255`)
- ⚠️ But for **negative char**, it might **misbehave**

✅ **Fix**: Cast it to `(unsigned char)` to keep things in the **safe range**.

---
