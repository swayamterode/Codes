// types of operator
// data type
// string
// number
// undefined
// null
// BigInt
// Symbol

let age = 34;
console.log("Age =", age);
console.log("Age is type of:", typeof age);
console.log("----------------------");
//conversion of number to string
age = age + "";
console.log("Age =", age);
console.log("Age is type of:", typeof age);
console.log("----------------------");
//34 -> "34"

//convert string to number:
let str = "34" + 47;
console.log("String =", str);
console.log("Type of str :", typeof str);
console.log("----------------------");

age = 3;
age = String(age); //3 converted to string
console.log("Age = ", age); //3
console.log("Type of age:", typeof age); //sting!
console.log("----------------------");

age = 45;
age = Number(age);
console.log("Age =", age);
console.log("typeof Age:", typeof age);
console.log("----------------------");
