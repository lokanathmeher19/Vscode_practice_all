//Functions are reusable blocks of code that perform a specific task. They can take input, process it, and return an output. Functions help in organizing code, improving readability, and reducing redundancy.

function sayhello(){
    console.log("Hello, World!");
}

sayhello(); //calling the function
// sayhello();
// sayhello();
// sayhello();
// sayhello();


        // arguments()
function add(a,b){
    console.log(a+b);
}

add(10,20); //30 //parameters
add(5,15); //20
add(7,3); //10


function multiply(a,b){
    // console.log(a*b);
    return a*b; //return statement is used to return a value from a function. It also terminates the function execution.    
}

let a=multiply(10,20);
console.log("that hey user reslut is",a); //200


//Add multiple number 
//method 1
function Addnumbers(){
    let ans=0;
    for(let i=0;i<arguments.length;i=i+1){
        ans=ans+arguments[i];
    }
    return ans;
}
 
//method 2

let result=Addnumbers(1,2,3,4,5,500,345,45,68,78,90,100);
console.log(result); //15


function Addnumbers(){
    let ans=0;
    for(let i=0;i<arguments.length;i=i+1){
        ans=ans+arguments[i];
    }
    console.log(ans);
}
 
Addnumbers(1,2,3,4,5,500,345,45,68,78,90,100,100); //15