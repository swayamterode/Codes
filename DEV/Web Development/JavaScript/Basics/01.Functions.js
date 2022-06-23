//functions
//creating a Function!
function fun() {
  console.log("This is an Function");
}
//Calling a Function!
fun();

/**Create a function that returns a name and say hello follwed by your name */
function hello(yourName) {d
  var result = "Hello " + yourName;
  console.log(result);
}
var name = prompt("What is your name?");
hello(name);

//How do arguments works in functions?
function sum(num1, num2) {
  var result = num1 + num2;
  console.log(result);
}
//calling the function with arguments
sum(45,23);
