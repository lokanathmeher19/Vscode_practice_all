# Variables — `var`, `let`, and `const`

## Goal
Learn how to declare variables in JavaScript and when to use `var`, `let`, and `const`.

## Prerequisites
- Basic JavaScript syntax
- Understanding of blocks `{}` and functions

## What you'll learn
- Differences between `var`, `let` and `const`
- Scope and reassignment rules
- Simple examples and best practices

---

## 1. `var` (legacy)
`var` declares a variable with function scope (not block scope). It can be re-declared and reassigned.

Example:

```js
var x = 10;
console.log(x); // 10

var x = 20; // re-declare allowed
console.log(x); // 20

{
  var x = 30; // affects outer scope
  console.log(x); // 30
}

console.log(x); // 30
```

Avoid `var` for new code because its scoping rules can cause bugs.

---

## 2. `let` (block-scoped, reassignable)
`let` is block-scoped: a `let` declared inside `{}` is not visible outside that block. You can reassign but cannot re-declare in the same scope.

Example:

```js
let count = 1;
count = 2; // allowed

{
  let count = 5; // separate variable inside block
  console.log(count); // 5
}

console.log(count); // 2
```

---

## 3. `const` (block-scoped, read-only binding)
`const` is also block-scoped. The binding cannot be reassigned, but objects/arrays declared with `const` can still be mutated.

Example:

```js
const name = "Slick";
// name = "New"; // TypeError: Assignment to constant variable.

const arr = [1, 2];
arr.push(3); // allowed — mutating the array
console.log(arr); // [1,2,3]
```

---

## Quick comparison

| Keyword | Scope    | Can reassign? | Can re-declare in same scope? |
|---------|----------|---------------|-------------------------------|
| `var`   | Function | Yes           | Yes                           |
| `let`   | Block    | Yes           | No                            |
| `const` | Block    | No            | No                            |

---

## Best practices (short and clear)
1. Prefer `const` by default. Use `let` when you need to reassign. Avoid `var`.
2. Use meaningful variable names and camelCase (`userName`, `totalCount`).
3. Declare variables close to where they are used.
4. Use `const` for values that shouldn't be reassigned (config, fixed strings).

## Small exercises
1. Declare a `const` array of numbers and add another number to it.
2. Create a function that uses a `let` counter and logs it inside a loop.

## Summary
Use `const` for most values, `let` when you need to change the value, and avoid `var` in modern JavaScript.

[Next lecture](nextlectureslink)
