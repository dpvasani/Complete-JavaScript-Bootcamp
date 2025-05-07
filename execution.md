### 💡 **JavaScript Execution Context Breakdown**

---

### ✅ **1. Global Execution Context**

| Phase                | Variable/Function | Memory Allocated (Before Execution) | Value After Execution |
|----------------------|-------------------|-------------------------------------|------------------------|
| **Memory Creation**  | `n`               | `undefined`                         |                        |
|                      | `square`          | Function definition                 |                        |
|                      | `square2`         | `undefined`                         |                        |
|                      | `square4`         | `undefined`                         |                        |
| **Execution Phase**  | `n`               | `2`                                 | `2`                    |
|                      | `square2`         | `square(2)`                         | `4`                    |
|                      | `square4`         | `square(4)`                         | `16`                   |

---

### ✅ **2. Function Execution Context: `square(2)`**

| Phase                | Variable          | Memory Allocated (Before Execution) | Value After Execution |
|----------------------|-------------------|-------------------------------------|------------------------|
| **Memory Creation**  | `num`             | `2`                                 |                        |
|                      | `ans`             | `undefined`                         |                        |
| **Execution Phase**  | `ans`             | `num * num` → `2 * 2`               | `4`                    |
|                      | `return`          | `ans`                               | `4`                    |

---

### ✅ **3. Function Execution Context: `square(4)`**

| Phase                | Variable          | Memory Allocated (Before Execution) | Value After Execution |
|----------------------|-------------------|-------------------------------------|------------------------|
| **Memory Creation**  | `num`             | `4`                                 |                        |
|                      | `ans`             | `undefined`                         |                        |
| **Execution Phase**  | `ans`             | `num * num` → `4 * 4`               | `16`                   |
|                      | `return`          | `ans`                               | `16`                   |

---

### ✅ Final Values in Global Scope

```js
n        => 2
square2  => 4
square4  => 16
```