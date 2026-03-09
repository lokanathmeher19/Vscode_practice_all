console.log(document.cookie)
document.cookie = "name=Biswa1122334400"
document.cookie = "name2=Biswa11223344002"
document.cookie = "name=Biswa"
let key = prompt("enter your key")
let value = prompt("enter your value")
document.cookie = `${encodeURIComponent(key)}=${encodeURIComponent(value)}`
console.log(document.cookie)