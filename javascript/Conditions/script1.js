const age=90;

if (age>=80){
    console.log("you are eligible to adult vote");
}else if (age>=18){
    console.log("you are not eligible to vote");
}
else {
    console.log("not eligible to vote");
}

//tornary opetarors 
if (age>=18){
    console.log("yes"); 
}

const age1=10;
age1>=18 ? console.log("yes") : console.log("no");


//switch case
const option=1;

switch (option) {
    case 1:
        console.log("namaste!");
        break;
    case 2:
        console.log("hello!");
        break;
}



switch (option) {
    case 1:{console.log("namaste!");}
    case 2:{console.log("hello!");}
    case 3:{console.log("bonjour!");}
}