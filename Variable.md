# ✏️ `var`, `let`, and `const` in JavaScript: Full Breakdown

---

## 1️⃣ Declaration

- **`var`** ✅ Allows declaration.
- **`let`** ✅ Allows declaration.
- **`const`** ✅ Allows declaration.

```javascript
var a;
let b;
const c = 5; // const must be initialized during declaration
```

❗ **Note**:  
- `const` **MUST** be initialized at the time of declaration.
- `var` and `let` can be declared without assigning a value.

---

## 2️⃣ Initialization (Assigning value for the first time)

- **`var`** ✅ Can be initialized during or after declaration.
- **`let`** ✅ Can be initialized during or after declaration.
- **`const`** ✅ Must be initialized **immediately** during declaration.

```javascript
var a; 
a = 10;

let b;
b = 20;

const c = 30; // Must initialize here
```

---

## 3️⃣ Assignment (Changing the value)

- **`var`** ✅ Reassignment allowed.
- **`let`** ✅ Reassignment allowed.
- **`const`** ❌ Reassignment **NOT** allowed.

```javascript
var a = 5;
a = 15; // ✅ allowed

let b = 10;
b = 20; // ✅ allowed

const c = 25;
c = 35; // ❌ TypeError: Assignment to constant variable
```

---

## 4️⃣ Redeclaration (Declaring the same variable again in the same scope)

- **`var`** ✅ Redeclaration allowed.
- **`let`** ❌ Redeclaration NOT allowed.
- **`const`** ❌ Redeclaration NOT allowed.

```javascript
var a = 10;
var a = 20; // ✅ allowed

let b = 15;
let b = 25; // ❌ SyntaxError: Identifier 'b' has already been declared

const c = 30;
const c = 40; // ❌ SyntaxError: Identifier 'c' has already been declared
```

---

# 🔥 Quick Summary Table

| Feature         | `var`             | `let`             | `const`          |
| :-------------- | :---------------- | :---------------- | :--------------- |
| Declaration     | ✅ Allowed         | ✅ Allowed         | ✅ Allowed        |
| Initialization  | Optional           | Optional           | Mandatory        |
| Reassignment    | ✅ Allowed         | ✅ Allowed         | ❌ Not allowed    |
| Redeclaration   | ✅ Allowed         | ❌ Not allowed     | ❌ Not allowed    |

---

# 🌟 Best Practices

- ✨ Always use `const` by default unless you know you'll need to reassign.
- ✨ Use `let` when reassignment is necessary.
- 🚫 Avoid `var` — it can cause unexpected issues because of **function scope** and **hoisting** behavior.
- ✨ Declare variables at the top of their scope to **minimize the Temporal Dead Zone** with `let` and `const`.

---
