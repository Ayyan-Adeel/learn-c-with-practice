
---

# CP9. Compound Literals 🍜

Think of **compound literals** as the **instant noodles** of C programming — quick, convenient, and you don’t bother naming them. Just mix, use, done!🌟

### Here's the idea:
```c
struct Point {
    int x, y;
};

// Without compound literals
struct Point p = {10, 20}; // You declare and name it
```

Now the compound literal magic:
```c
// With compound literals — just like instant noodles 🍜
struct Point p = (struct Point){10, 20};
```

No need to separately define a variable first — it's quick and direct.

---

## Why They’re Awesome:

✅ Great for **temporary** or **one-time-use** objects  
✅ Perfect for functions like `initialize()` where you might do:
```c
date d = (date){0}; // resets all fields to 0 instantly
```

Basically, **no-name, no-fuss structures** when you just need it *right now*.

---
