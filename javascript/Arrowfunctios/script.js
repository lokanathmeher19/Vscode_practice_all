//arrow functions

//1.syntax
const sayhello=()=>{
    //arrow functions
    console.log("Hello, World!");
};

const add=(a,b)=>a+b;
console.log(add(2,3))


//2.'argument' keyword
const addnumber = (...nums) => {
    console.log(nums);
};

addnumber(1, 5, 67, 860);


//hosting 
// sayhello(); //Hello, World!

const sayhello=()=>{
    console.log("Hello, World!");
};

sayhello(); //Hello, World! 


//this keywords
const obj={
    value:20,
    myfunction:function(){
        console.log("Value is"+this.value); //20
    },
};

obj.myfunction(); //20