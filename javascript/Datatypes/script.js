//data types
//numbers  


// let num=10;
// let num2=20;


//string
const firstname="1234#john";
const lastname="doe";

console.log(firstname+lastname); //johndoe
console.log(firstname+" "+lastname); //john doe

//Booleans 
let isStudent=true;

console.log(isStudent +10); //true

let iStudent=false;

console.log(iStudent +10); //false 

//null 

let lastlogindate=null;
console.log(lastlogindate); //null


//objects 

const person={
    name:"john",
    age:30,
    isStudent:true
};

console.log(person.name); //john
console.log(person.age); //30
console.log(person.isStudent); //true   
console.log(person); //{name: "john", age: 30, isStudent: true}


//operateors

let num1=3.15;
let num2=20;

console.log(num1+num2); //23.15
console.log(num1-num2); //-16.85
console.log(num1*num2); //63.00000000000001    
console.log(num1/num2); //0.5
console.log(num1%num2); //10


if(1){
    console.log("this is true");
}

//string '1'+'2'='12'   
//string '1'-'2'=-1
//string+number=string
//string*number=number
//string/number=number

console.log('a'+1); //a1
console.log('a'-1);


//type of opertators
console.log(typeof num1); //number
console.log(typeof firstname); //string
console.log(typeof isStudent); //boolean
console.log(typeof person); //object    