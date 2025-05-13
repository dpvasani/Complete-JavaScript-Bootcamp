## 🔥 JavaScript `setTimeout()` Interview Questions Explained

These test your understanding of **scoping**, **closures**, and the **event loop**.

---

### ✅ **Question 1: `let` inside the loop**

```js
for (let i = 0; i < 5; i++) {
    // 'let' is block scoped – each iteration gets its own copy of 'i'.
    // When the callbacks run, each remembers its own 'i' (closure).
    setTimeout(() => console.log(i), 0);
}
// Output: 0 1 2 3 4
```

---

### ✅ **Question 2: `let` declared outside the loop**

```js
let j = 0;
for (j = 0; j < 5; j++) {
    // Only one 'j' exists – declared outside the loop.
    // After the loop ends, j = 5, and all callbacks log 5.
    setTimeout(() => console.log(j), 0);
}
// Output: 5 5 5 5 5
```

---

### ✅ **Question 3: `var` inside the loop**

```js
for (var k = 0; k < 5; k++) {
    // 'var' is function-scoped – not block scoped like 'let'.
    // No new 'k' is created per iteration; all timeouts share same 'k'.
    // After the loop, k = 5, so all callbacks print 5.
    setTimeout(() => console.log(k), 0);
}
// Output: 5 5 5 5 5
```

---

### ✅ **Question 4: `var` declared before the loop**

```js
var m;
for (m = 0; m < 5; m++) {
    // Same as Q3 – single 'm' declared outside loop.
    // Shared across all iterations. After loop, m = 5.
    setTimeout(() => console.log(m), 0);
}
// Output: 5 5 5 5 5
```

---
