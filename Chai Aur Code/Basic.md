# 🚀 JavaScript Type Conversion, Operations & More – Explained with Examples

---

## 📌 Type Conversion Basics

```js
let score = "hitesh";
console.log(typeof score);           // 👉 "string"

let valueInNumber = Number(score);
console.log(typeof valueInNumber);   // 👉 "number"
console.log(valueInNumber);          // 👉 NaN ❌ Not a Number
```

🧠 **Explanation**:

* `"hitesh"` can't be converted to a number → returns `NaN`.

### ✅ Conversion Examples:

```js
Number("33")       // 👉 33
Number("33abc")    // 👉 NaN
Number(true)       // 👉 1
Number(false)      // 👉 0
```

---

## 🔁 Boolean Conversion

```js
let isLoggedIn = "hitesh";
let booleanIsLoggedIn = Boolean(isLoggedIn);
console.log(booleanIsLoggedIn);      // 👉 true ✅
```

📌 **Rules**:

* `1` → `true`
* `0`, `""`, `null`, `undefined` → `false`
* Any non-empty string → `true`

---

## 🔤 String Conversion

```js
let someNumber = 33;
let stringNumber = String(someNumber);
console.log(stringNumber);           // 👉 "33"
console.log(typeof stringNumber);   // 👉 "string"
```

---

## ➕ Arithmetic Operations

```js
let value = 3;
let negValue = -value;
console.log(negValue);               // 👉 -3

console.log(2 + 2);                  // 👉 4
console.log(2 - 2);                  // 👉 0
console.log(2 * 2);                  // 👉 4
console.log(2 ** 3);                 // 👉 8 (2^3)
console.log(2 / 3);                  // 👉 0.666...
console.log(2 % 3);                  // 👉 2
```

---

## 🔗 String Concatenation

```js
let str1 = "hello";
let str2 = " hitesh";
let str3 = str1 + str2;
console.log(str3);                   // 👉 "hello hitesh"

console.log("1" + 2);                // 👉 "12"
console.log(1 + "2");                // 👉 "12"
console.log("1" + 2 + 2);            // 👉 "122"
console.log(1 + 2 + "2");            // 👉 "32"
```

---

## 💡 Type Coercion in Expressions

```js
console.log((3 + 4) * 5 % 3);        // 👉 2

console.log(+true);                  // 👉 1
console.log(+"");                    // 👉 0
```

---

## 🧮 Assignment Chaining

```js
let num1, num2, num3;
num1 = num2 = num3 = 2 + 2;
console.log(num1, num2, num3);       // 👉 4 4 4
```

---

## 🕹️ Increment Operators

```js
let gameCounter = 100;
++gameCounter;
console.log(gameCounter);            // 👉 101
```

---

## 🔍 Comparison & Equality

```js
console.log(null > 0);               // 👉 false
console.log(null == 0);              // 👉 false
console.log(null >= 0);              // 👉 true

console.log(undefined == 0);         // 👉 false
console.log(undefined > 0);          // 👉 false
console.log(undefined < 0);          // 👉 false

console.log("2" === 2);              // 👉 false ❌ (Strict comparison)
```

---

## 🎤 Template Literals

```js
const name = "hitesh";
const repoCount = 50;
console.log(`Hello my name is ${name} and my repo count is ${repoCount}`);
```

---

## 🧵 String Methods

```js
const gameName = new String('hitesh-hc-com');

console.log(gameName.charAt(2));     // 👉 "t"
console.log(gameName.indexOf('t'));  // 👉 2

const newString = gameName.substring(0, 4);
console.log(newString);              // 👉 "hite"

const anotherString = gameName.slice(-8, 4);
console.log(anotherString);          // 👉 ""

const newStringOne = "   hitesh    ";
console.log(newStringOne.trim());    // 👉 "hitesh"

const url = "https://hitesh.com/hitesh%20choudhary";
console.log(url.replace('%20', '-'));       // 👉 "https://hitesh.com/hitesh-choudhary"
console.log(url.includes('sundar'));        // 👉 false

console.log(gameName.split('-'));   // 👉 [ 'hitesh', 'hc', 'com' ]
```

---

## 🔢 Number Object & Formatting

```js
const balance = new Number(100);
console.log(balance.toString().length);     // 👉 3
console.log(balance.toFixed(1));            // 👉 "100.0"

const otherNumber = 123.8966;
console.log(otherNumber.toPrecision(4));    // 👉 "123.9"

const hundreds = 1000000;
console.log(hundreds.toLocaleString('en-IN')); // 👉 "10,00,000"
```

---

## 🎲 Math Object in JS

```js
console.log(Math.abs(-4));           // 👉 4
console.log(Math.round(4.6));        // 👉 5
console.log(Math.ceil(4.2));         // 👉 5
console.log(Math.floor(4.9));        // 👉 4
console.log(Math.min(4, 3, 6, 8));   // 👉 3
console.log(Math.max(4, 3, 6, 8));   // 👉 8

console.log(Math.random());          // 👉 Random number (0–1)
console.log(Math.floor(Math.random() * 10) + 1);  // 👉 1–10

const min = 10, max = 20;
console.log(Math.floor(Math.random() * (max - min + 1)) + min); // 👉 10–20
```

---

## 📅 Working with Dates

```js
let myDate = new Date();
console.log(myDate.toString());
console.log(myDate.toDateString());
console.log(myDate.toLocaleString());

let myCreatedDate = new Date("01-14-2023");
console.log(myCreatedDate.toLocaleString());

let myTimeStamp = Date.now();
console.log(myTimeStamp);                        // 👉 Current timestamp in ms
console.log(myCreatedDate.getTime());            // 👉 Timestamp of custom date
console.log(Math.floor(Date.now() / 1000));      // 👉 Timestamp in seconds

let newDate = new Date();
console.log(newDate);
console.log(newDate.getMonth() + 1);             // 👉 Month (1-based)
console.log(newDate.getDay());                   // 👉 Day of week

console.log(newDate.toLocaleString('default', {
  weekday: "long",
})); // 👉 Full weekday name
```

---

## 🧬 Data Types

### 🔹 Primitive Types

```js
const score = 100;
const scoreValue = 100.3;
const isLoggedIn = false;
const outsideTemp = null;
let userEmail;
const id = Symbol('123');
const anotherId = Symbol('123');

console.log(id === anotherId);      // 👉 false ❌ unique symbols
```

✅ Includes:

* `String`, `Number`, `Boolean`, `null`, `undefined`, `Symbol`, `BigInt`

---

### 🔸 Reference Types (Non-Primitive)

```js
const heros = ["shaktiman", "naagraj", "doga"];
let myObj = {
    name: "hitesh",
    age: 22,
};

const myFunction = function(){
    console.log("Hello world");
}

console.log(typeof anotherId);      // 👉 "symbol"
```

✅ Includes:

* Arrays
* Objects
* Functions

---

## 🔗 References

* 🔍 [ECMAScript Type Conversion Spec](https://tc39.es/ecma262/multipage/abstract-operations.html#sec-type-conversion)
* 📚 [JavaScript Spec: ECMA-262](https://262.ecma-international.org/5.1/#sec-11.4.3)

---
