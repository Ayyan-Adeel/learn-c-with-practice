<!-- C5 -->
---

### 📘 `factorial(n)` – Explained Step-by-Step

```c
int factorial(int n)
{
    if (n < 2) return 1; // Base case
    
    return n * factorial(n - 1); // Recursive case
}
```

---

### 🧱 Function Structure Breakdown

#### 1. **Function Definition**
```c
int factorial(int n)
```
- Declares a function named `factorial` that takes an integer `n`.
- Returns an `int` — the factorial result.

---

#### 2. **Base Case**
```c
if (n < 2) return 1;
```
- If `n` is `0` or `1`, it returns `1`.
- This **stops** the recursion from going on forever — it’s the "exit door".

---

#### 3. **Recursive Case**
```c
return n * factorial(n - 1);
```
- Function calls **itself** with `n - 1`.
- Builds up a chain like this:  
  `factorial(4) = 4 * factorial(3)`  
  `factorial(3) = 3 * factorial(2)`  
  ...until it hits the base case.

---

### 🔁 Recursion Flow Example (`factorial(4)`)

```c
factorial(4)
→ 4 * factorial(3)
    → 3 * factorial(2)
        → 2 * factorial(1)
            → return 1 at factorial(1) (base case hit)
        → returns 2 * factorial(1) = 2 * 1, likewise:
    → returns 3 * 2 = 6
→ returns 4 * 6 = 24
```

---

### 📝 Summary
- Recursion is like stacking calls, then solving them backward. [`DOWN` to `UP`]
- The **base case** ends the recursion.
- The **recursive case** breaks the problem down.

---
