# Practice Set 4 — Easy Step-by-Step — Easy Step-by-Step

## Goal
Learn the main idea of 'Practice Set 4 — Easy Step-by-Step' with short steps.

## Prerequisites
- Basic JavaScript knowledge

## Quick Steps
1. Read the short summary below.
2. Try the example code in a browser console or Node.js.
3. Do the practice exercises at the end.

## Example
```js
console.log("har\"".length)
```

## Summary
Learn the main idea of 'Practice Set 4' with short steps.

- Basic JavaScript knowledge

1. Read the short summary below.

2. Try the example code in a browser console or Node.js.

3. Do the practice exercises at the end.

```js

## Exercises
1. Reproduce the example and modify one value.
2. Write a small function that uses the concept.

---

<details>
<summary>Full original content</summary>


# Practice Set 4 — Easy Step-by-Step

## Goal
Learn the main idea of 'Practice Set 4' with short steps.

## Prerequisites
- Basic JavaScript knowledge

## Quick Steps
1. Read the short summary below.
2. Try the example code in a browser console or Node.js.
3. Do the practice exercises at the end.

## Example
```js
console.log("har\"".length)
```

## Summary
Time to practice what you've learned! This practice set will help you get comfortable with the concepts you've learned in previous lessons.

What will the following code print in JavaScript?

```js

console.log("har\"".length)

```

<details><summary>Answer</summary>

## Exercises
1. Reproduce the example and modify one value.
2. Write a small function that uses the concept.

---

<details>
<summary>Full original content</summary>


# Practice Set 4
Time to practice what you've learned! This practice set will help you get comfortable with the concepts you've learned in previous lessons.

## Question 1
What will the following code print in JavaScript?
```js
console.log("har\"".length)
```
<details><summary>Answer</summary>

The above code will print `4` because the escape sequence `\` is not counted as a character in the string. Therefore, the length of the string `"har\""` is actually 4, not 5.
</details> </br>

## Question 2
Explore the `includes`, `startsWith`, and `endsWith` functions in a string.

<details><summary>Answer</summary>

```js
let str = "Hello World";
console.log(str.includes("Hello")); // true
console.log(str.startsWith("Hello")); // true
console.log(str.endsWith("World")); // true

console.log(str.includes("Biswa")); // false
console.log(str.startsWith("new")); // false
console.log(str.endsWith("new")); // false
```
The `includes` method returns `true` if the string includes the specified substring, otherwise it returns `false`. 
The `startsWith` method returns `true` if the string starts with the specified substring, otherwise it returns `false`.
The `endsWith` method returns `true` if the string ends with the specified substring, otherwise it returns `false`.

</details> </br>

## Question 3
Write a program to convert a given string into lowercase.
<details><summary>Answer</summary>

```js
let str = "Hello World";
console.log(str.toLowerCase());
```
The `toLowerCase` method returns the calling string value converted to lower case.

</details> </br>

## Question 4
Extract the numerical amount from this string "Total: Rupees 2907".
<details><summary>Answer</summary>

```js
let str = "Total: Rupees 2907";
console.log(str.slice(13));
```
The `slice` method extracts a section of a string and returns it as a new string, without modifying the original string. The `slice` method takes two arguments, the starting index and the ending index (end not included). If the ending index is not specified, it will slice the string till the end.

</details> </br>

## Question 5
Try to change the 4th character of a given string. Would you be able to do it?
<details><summary>Answer</summary>

```js
let str = "Hello World";
str[3] = "z"; // 3rd index is 4th character 
console.log(str); // Hello World | No change
```
Strings are immutable in JavaScript. This means that strings cannot be changed, only replaced. Therefore, the above code will not change the string.

</details> </br>

Thats it for this practice set! 

</details>

</details>