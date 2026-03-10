console.log("Hello World");

//variables 
//var 

//datatyeps varname == value; strongly typed language.
//js---->dynamic typed language.

var ageVar = 25;
var name = "Biswajit";
var num1 = 10;
var num2 = 20;
console.log(ageVar);
console.log(num1 + num2);

ageVar = "biswajit";
console.log(ageVar);



//naming convention
// firstName (preferred)Camel caseing
// first_name
// first-name
//FirstName

var firstName = "Biswajit";
console.log(firstName);


if(true){
    var ageVar = 30;
}
console.log(ageVar); //30

//let and const
//block scope
//let and const are block scoped variables. They are only accessible within the block they are defined in.

// console.log(age); //ReferenceError: age is not defined
// {
// var a = 25;
// }

// console.log(a);  


let ageLet = 25;

console.log(ageLet); //25   

if(true){
    let a=20;
    console.log(a);
}

//const is used to declare a constant variable. A constant variable cannot be reassigned a new value. It must be initialized at the time of declaration.


//const 
//scope->Local and global scope

const ageConst = 25;


console.log(ageConst);