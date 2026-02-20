
// 1.//Arrays are used to store multiple values in a single variable. An array is a special variable that can hold more than one value at a time. It is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

// const students = ["Alice", "Bob", "Charlie", "Diana"];
// const marks=[1,2,3,4,5];

// const myarray=[1,true,"Lokanath Meher","@"]


// console.log(students); // Output: ["Alice", "Bob", "Charlie", "Diana"]
// console.log(students[0]); // Output: "Alice"
// console.log(students[1]); // Output: "Bob"      
// console.log(students[4]); // Output: undefined (since index 4 doesn't exist in the array)
// console.log(myarray)   
// students.push("Eve"); // Adds "Eve" to the end of the array
// students.push("Frank"); // Adds "Frank" to the end of the array
// console.log(students); // Output: ["Alice", "Bob", "Charlie", "Diana", "Eve"]

// students.pop(); // Removes the last element ("Eve") from the array
// console.log(students); // Output: ["Alice", "Bob", "Charlie", "Diana"]




// 2.//arrays reverse

const student = ["biswa", "Boby", "slick", "chumki"];
student.reverse();
console.log(student); // Output: ["chumki", "slick", "Boby", "biswa"]

function print(n){
    console.log(n); 

}

student.forEach(print); // Output: biswa, Boby, slick, chumki
student.map(print); // Output: biswa, Boby, slick, chumki


const numbers=[1,2,3,4,5];

numbers.forEach((num)=>{
    console.log(num); 
}); // Output: 1, 2, 3, 4, 5

numbers.map((num)=>{
    console.log(num); 
}); // Output: 1, 2, 3, 4, 5

numbers.forEach((num)=>console.log(num*2)); // Output: 2, 4, 6, 8, 10
numbers.map((num)=>console.log(num*2)); // Output: 2, 4, 6, 8, 10


let newarr=[]
numbers.forEach((num)=>{
    newarr.push(num*2); 
});
console.log(newarr); // Output: [2, 4, 6, 8, 10]    


const numbers1=[1,2,3,4,5,6,7,8,9,10];

function double(num){
    return num*2; 
}   

3.//foreach & map

let  newarrs=numbers1.forEach(double);
console.log(newarr); // Output: undefined (forEach does not return a new array)

let newarr1=numbers1.map(double);
console.log(newarr1); // Output: [2, 4, 6, 8, 10, 12, 14, 16, 18, 20] (map returns a new array)

4.//find 

let ans=numbers.find((num)=>num===4);
console.log(ans); // Output: 4 (find returns the first element that satisfies the condition)

5.//filter
const newarr2=numbers.filter((num)=>num%2===0);
console.log(newarr2); // Output: [2, 4, 6, 8, 10] (filter returns a new array with elements that satisfy the condition)


6.//slice

const alpha=["a","b","c","d","e","f"];

const sliced=alpha.slice(2,5);
console.log(sliced); // Output: ["c", "d", "e"] (slice returns a new array containing the selected elements)

7.//splice 

const spliced=alpha.splice(1,4);
console.log(spliced); // Output: ["b", "c", "d", "e"] (splice returns an array containing the deleted elements)
console.log(alpha); // Output: ["a", "f"] (the original array is modified by splice)