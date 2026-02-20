// logical operators
// && (AND) operator
// || (OR) operator
// ! (NOT) operator 
//AND--> conditions must be true for && operator to return true
//OR--> only one condition must be true for || operator to return true



const age = 20; 
const gender='female';

if(age>=18 || gender =='female'){
    console.log("You are adult female ");
}else{
    console.log("You are not adult female");
}

const number = 4;

if(number % 2 != 0 ){
    console.log("The number is even");
}else{
    console.log("The number is odd");
}   