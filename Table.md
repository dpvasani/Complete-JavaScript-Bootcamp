## 🔍 First-Class vs Higher-Order Functions in JavaScript

In JavaScript, **all functions are first-class citizens**, meaning they can be treated like any other value. But **higher-order functions** are a special subset that either **accept functions as arguments** or **return them as results**.


| 🧩 **Feature**                      | ✅ **First-Class Functions**                                                                 | 🚀 **Higher-Order Functions**                                                                 |
|------------------------------------|----------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------|
| 📖 **Definition**                  | Functions treated like values — can be assigned, passed, or returned.                        | Functions that take **other functions** as arguments or **return** functions.                 |
| 🎯 **Function as a Value**         | ✅ Yes — functions are values (just like numbers or strings).                                | ✅ Yes — HOFs operate *on* functions as values.                                                |
| 🔁 **Passing Functions**           | ✅ Possible — any function can be passed as an argument.                                     | 🔑 Required — HOFs are *defined* to accept functions.                                         |
| 🔄 **Returning Functions**         | ✅ Possible — any function can return another function.                                      | 🔁 Expected — HOFs often return other functions.                                               |
| 🛠️ **Use Case**                   | Reusability, abstraction, modularity.                                                        | Callbacks, event handlers, functional patterns like `map`, `filter`, `reduce`.               |
| 💡 **Example**                     | `let add = (a, b) => a + b;`<br>`let result = add(2, 3);`                                    | `function apply(fn, a, b) { return fn(a, b); }`<br>`apply(add, 2, 3);`                        |

---

### ✨ Quick Summary

- ✅ **First-Class Functions**: JS treats functions like variables.
- 🚀 **Higher-Order Functions**: JS allows functions that **use** or **produce** other functions.
