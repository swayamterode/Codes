//  user input using prompt()
// food = Number(prompt("Total cost of food"));
// tipPercentage = Number(prompt('tip%?')) / 100;
// tipAmount = food * tipPercentage
// console.log("Tip:",tipAmount);
// alert(tipAmount);
// total = food + tipAmount
// console.log("Total",total);

/*
█▀▄▀█ ▄▀█ ▀█▀ █░█   █▀▄▀█ █▀▀ ▀█▀ █░█ █▀█ █▀▄ █▀
█░▀░█ █▀█ ░█░ █▀█   █░▀░█ ██▄ ░█░ █▀█ █▄█ █▄▀ ▄█
Floor - Wraps it down
Ceil - Wraps it up
Random - Assigns random number
*/
console.log("Use of ceil()");
num1 = 1120.21;
let ceil = Math.ceil(num1);
console.log("Number :", num1);
console.log("Use of Ceil()", ceil);
console.log("\n\n");

/*
█▄▄ ▄▀█ █▄▄ █▄█   █░█░█ █▀▀ ▄▀█ ▀█▀ █░█ █▀▀ █▀█   ▄▀█ █▀█ █▀█
█▄█ █▀█ █▄█ ░█░   ▀▄▀▄▀ ██▄ █▀█ ░█░ █▀█ ██▄ █▀▄   █▀█ █▀▀ █▀▀
*/
let weather = prompt("how is the weather: ");
if (weather == "rainy" || "Raan" || "rain" || "Cloudy") {
  console.log("Grab a Umberalaa ☔");
} else {
  console.log("Wear your sunglasses 😎");
}
console.log("\n\n");

// ███████╗██╗░░░██╗███╗░░██╗░█████╗░████████╗██╗░█████╗░███╗░░██╗░██████╗
// ██╔════╝██║░░░██║████╗░██║██╔══██╗╚══██╔══╝██║██╔══██╗████╗░██║██╔════╝
// █████╗░░██║░░░██║██╔██╗██║██║░░╚═╝░░░██║░░░██║██║░░██║██╔██╗██║╚█████╗░
// ██╔══╝░░██║░░░██║██║╚████║██║░░██╗░░░██║░░░██║██║░░██║██║╚████║░╚═══██╗
// ██║░░░░░╚██████╔╝██║░╚███║╚█████╔╝░░░██║░░░██║╚█████╔╝██║░╚███║██████╔╝
// ╚═╝░░░░░░╚═════╝░╚═╝░░╚══╝░╚════╝░░░░╚═╝░░░╚═╝░╚════╝░╚═╝░░╚══╝╚═════╝░
/**
 * make life easier!
 * can store blocks of code!
 */

function sayMyName(name) {
  console.log(name);
}

function sayMyName2(name) {
  greet = `Hi ${name}, Nice to meet you!`;
  console.log(greet);
}
sayMyName2("Swayam Terode");

function sum(num1, num2) {
  sum = num1 + num2;
  return sum;
}
total = sum(10, 20);
console.log(sum);

// function calculateFoodTotal(food, tip) {
//   const tipPercentage = tip / 100;
//   const tipAmount = food * tipPercentage;
//   const total = sum(food, tipAmount);
//   return total;
// }
// function sum(food, tipAmount) {
//   const totalSum = food + tipAmount;
//   return totalSum;
// }
// console.log(calculateFoodTotal(10300, 20));

// ███████╗░██████╗░█████╗░
// ██╔════╝██╔════╝██╔═══╝░
// █████╗░░╚█████╗░██████╗░
// ██╔══╝░░░╚═══██╗██╔══██╗
// ███████╗██████╔╝╚█████╔╝
// ╚══════╝╚═════╝░░╚════╝░
// ▄▀█ █▀█ █▀█ █▀█ █░█░█   █▀▀ █░█ █▄░█ █▀▀ ▀█▀ █ █▀█ █▄░█ █▀
// █▀█ █▀▄ █▀▄ █▄█ ▀▄▀▄▀   █▀░ █▄█ █░▀█ █▄▄ ░█░ █ █▄█ █░▀█ ▄█

const sumArrow = (num1, num2) => {
  return num1 + num2;
};
console.log("Sum:", sumArrow(10, 20)); //30
