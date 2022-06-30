// string indexing

let firstName = "Sunny";

//  S    u    n   n   y
//  0    1    2   3   4

console.log(firstName[0]); //prints S
console.log(firstName[1]); //prints u
console.log(firstName[2]); //prints n
console.log(firstName[3]); //prints n
console.log(firstName[4]); //prints y

//how to find length of string?
//firstName.length
console.log("Total length of the",firstName.length);
//how to find last index of the string
console.log("Last index of the string: ",firstName.length - 1);

//how to find last index element of the string
console.log("Last element of the string: ", firstName[firstName.length - 1]);
