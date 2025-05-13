# 📘 **JavaScript Strings – Complete Guide**

### ✅ **What is a String?**

A **string** is a sequence of characters used to represent text.
You can use:

* **Single quotes (`'`)** – `let name = 'dp';`
* **Double quotes (`"`)** – `let name = "dp";`

```js
let name = "dp";
console.log(name[3]); // 👉 Output: undefined (index out of bounds)
```

---

### 🔥 **Template Literals (ES6+)**

Introduced in ES6 using **backticks (\`)** for multiline strings and **interpolation**.

```js
let boy1 = "hmm";
let boy2 = "ok";
let sentence = `${boy1} nice ${boy2}`;
console.log(sentence); // 👉 Output: hmm nice ok
```

You can also include escape characters like:

```js
let fruit = `Bana\'na`;
console.log(fruit); // 👉 Output: Bana'na
```

> 💡 **Escape Characters**

* `\'` ➝ Single quote
* `\n` ➝ New line
* `\t` ➝ Tab
* `\r` ➝ Carriage return

---

## 🧰 String Methods & Properties

### 🔎 **Access Characters**

```js
const message = "Hello";
console.log(message[0]); // 👉 H
console.log(message[3]); // 👉 l
```

---

### ➕ **String Concatenation**

```js
const firstName = "John";
const lastName = "Doe";
console.log(firstName + ' ' + lastName); // 👉 John Doe

console.log(firstName.concat(' ', lastName)); // 👉 John Doe
```

---

### 🧩 **Search Substrings**

```js
const welcome = "Hello, world!";
console.log(welcome.indexOf("world")); // 👉 7
console.log(welcome.indexOf("open"));  // 👉 -1
```

---

### ✂️ **Extract Substrings**

```js
console.log(welcome.slice(0, 5)); // 👉 Hello
console.log(welcome.slice(7));    // 👉 world!
```

---

### ♻️ **Replace Substrings**

```js
const msg = "Hello, John!";
console.log(msg.replace("John", "Alice")); // 👉 Hello, Alice!
```

```js
const repetitive = "John is good. John is kind.";
console.log(repetitive.replaceAll("John", "Alice")); // 👉 Alice is good. Alice is kind.
```

> ✅ `replaceAll()` is supported from **ES2021**

---

### 🧠 **Check Inclusion**

```js
console.log(welcome.includes("World")); // 👉 true
console.log(welcome.includes("open"));  // 👉 false
```

---

### 📏 **String Length**

```js
console.log(welcome.length); // 👉 13
```

---

### 🔤 **Case Conversion**

```js
console.log(welcome.toUpperCase()); // 👉 HELLO, WORLD!
console.log(welcome.toLowerCase()); // 👉 hello, world!
```

---

### 🧼 **Trim Whitespace**

```js
const messy = "   Hello, World!   ";
console.log(messy.trim());       // 👉 Hello, World!
console.log(messy.trimStart());  // 👉 Hello, World!   
console.log(messy.trimEnd());    // 👉    Hello, World!
```

---

### 🎛️ **Padding**

```js
const padded = "Hello";
console.log(padded.padStart(10, '*')); // 👉 *****Hello
console.log(padded.padEnd(10, '-'));   // 👉 Hello-----
```

---

### 🔢 **Character Info**

```js
console.log(message.charAt(0));      // 👉 H
console.log(message.charCodeAt(0));  // 👉 72
```

---

### 🔪 **Split String**

```js
console.log(welcome.split(","));  // 👉 ["Hello", " world!"]
```

---

### 🧾 **Method Summary**

| Method                                    | Description                            |
| ----------------------------------------- | -------------------------------------- |
| `.length`                                 | Returns length of string               |
| `.slice(start, end)`                      | Extract part of string                 |
| `.substring(start, end)`                  | Similar to slice but no negative index |
| `.substr(start, length)`                  | Deprecated, similar to slice           |
| `.replace()` / `.replaceAll()`            | Replace substrings                     |
| `.toUpperCase()` / `.toLowerCase()`       | Convert case                           |
| `.concat()`                               | Join strings                           |
| `.trim()` / `.trimStart()` / `.trimEnd()` | Remove whitespace                      |
| `.padStart()` / `.padEnd()`               | Pad string                             |
| `.charAt(index)`                          | Character at index                     |
| `.charCodeAt(index)`                      | Unicode at index                       |
| `.split(delimiter)`                       | Split into array                       |

---

## 🧪 **Practice Set – Ch. 4: Strings**

### 1️⃣ Count Characters

```js
const str = "Hello, World!";
console.log(str.length); // 👉 13
```

---

### 2️⃣ Check Substring

```js
const str = "Hello, World!";
console.log(str.includes("World")); // 👉 true
```

---

### 3️⃣ Convert to Uppercase

```js
const str = "Hello, World!";
console.log(str.toUpperCase()); // 👉 HELLO, WORLD!
```

---

### 4️⃣ Extract Substring

```js
const str = "Hello, World!";
console.log(str.slice(7, 12)); // 👉 World
```

---

### 5️⃣ Replace Substring

```js
const str = "Hello, John!";
console.log(str.replace("John", "Alice")); // 👉 Hello, Alice!
```

---

### 6️⃣ Split String

```js
const str = "Hello, World!";
console.log(str.split(",")); // 👉 ["Hello", " World!"]
```

---

### 7️⃣ Starts With

```js
const str = "Hello, World!";
console.log(str.startsWith("Hello")); // 👉 true
```

---

### 8️⃣ Ends With

```js
const str = "Hello, World!";
console.log(str.endsWith("World!")); // 👉 true
```

---

### 9️⃣ Trim Whitespace

```js
const str = "   Hello, World!   ";
console.log(str.trim()); // 👉 Hello, World!
```

---

### 🔟 Check if String is Empty

```js
const str = "";
console.log(str.length === 0); // 👉 true
```

---

