//high order functions and callbacks

// function add(a,b){
//     console.log(a+b); 
// }

// add(2,7); //5


function add(a,b,cb){
    let result = a+b;
    cb(result); 
}

add(2,7,(val)=>console.log(val));
add(400,10,(res)=>console.log(res));