//loops 

//for loop-->if u know how many times to loop

for(let i=1;i<=10;i++){
    console.log("Lokanath "+i);
}


for(let i=1;i<=10;i=i+2){
    console.log("Lokanath "+i);
}

//while loop

let ip=0;
let house=50;

while(ip != house){
    ip=ip+1;
    console.log("Step taken"+ip)
}


//Do while loop-->execute at least once even if the condition is false  

do{
    ip=ip+1;
    console.log("Step taken"+ip);
}while(ip <= house)



//Guess the input 

let input=40;

let guess=0;

do{
    guess=parseInt(prompt("Guess the number"));
    if(guess==input){
        alert("Congratulations! You guessed the number correctly.");
        break;  
    }
    
}while(guess != input)
