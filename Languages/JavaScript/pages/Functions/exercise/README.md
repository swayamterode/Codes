# Functions

```js
/*
TODO: Write a function that sums two numbers
TODO: Write a function that subtracts two numbers
TODO: Write a function that divides two numbers.
TODO: Write a function that multiplies two numbers.
*NOTE* be sure to handle dividing by zero 😉
ES5 Syntax: function Add(){}
ES6 Syntax (Arrow function): const add = () => {}
*/
/*
    TODO: create a function that console logs the result of any of the above operations.
  */
console.log("Use of Functions:");
let num1 = 30,
  num2 = 15;

//   ▄▀█ █▀▄ █▀▄ █ ▀█▀ █ █▀█ █▄░█
//   █▀█ █▄▀ █▄▀ █ ░█░ █ █▄█ █░▀█

function add(num1, num2) {
  let sum = num1 + num2;
  return sum;
}
console.log("Addition:", add(num1, num2));

// █▀ █░█ █▄▄ ▀█▀ █▀█ ▄▀█ █▀▀ ▀█▀ █ █▀█ █▄░█
// ▄█ █▄█ █▄█ ░█░ █▀▄ █▀█ █▄▄ ░█░ █ █▄█ █░▀█
function sub(num1, num2) {
  let dif = num1 - num2;
  return dif;
}
console.log("Sub:", sub(num1, num2));

// █▀▄ █ █░█ █ █▀ █ █▀█ █▄░█
// █▄▀ █ ▀▄▀ █ ▄█ █ █▄█ █░▀█

function div(num1, num2) {
  let division = num1 / num2;
  return division;
}
console.log("Division:", div(num1, num2));

// █▀▄▀█ █░█ █░░ ▀█▀ █ █▀█ █░░ █ █▀▀ ▄▀█ ▀█▀ █ █▀█ █▄░█
// █░▀░█ █▄█ █▄▄ ░█░ █ █▀▀ █▄▄ █ █▄▄ █▀█ ░█░ █ █▄█ █░▀█

function mul(num1, num2) {
  let multiplication = num1 * num2;
  return multiplication;
}

console.log("Multiplication:", mul(num1, num2));

// █▀▀ █▀ █▄▄   █▀ █▄█ █▄░█ ▀█▀ ▄▀█ ▀▄▀   ▄▀ ▄▀█ █▀█ █▀█ █▀█ █░█░█   █▀▀ █░█ █▄░█ █▀▀ ▀█▀ █ █▀█ █▄░█ ▀▄
// ██▄ ▄█ █▄█   ▄█ ░█░ █░▀█ ░█░ █▀█ █░█   ▀▄ █▀█ █▀▄ █▀▄ █▄█ ▀▄▀▄▀   █▀░ █▄█ █░▀█ █▄▄ ░█░ █ █▄█ █░▀█ ▄▀

console.log("------------Using Arrow Function--------\n");
let sum = num1 + num2;
const addition = (num1, num2) => {
  return sum;
};
console.log("Addition:", addition(num1, num2));

const subtracts = (num1, num2) => {
  let dif = num1 - num2;
  return dif;
};
console.log("Sub:", subtracts(num1, num2));

const divides = (num1, num2) => {
  let division = num1 / num2;
  return division;
};
console.log("Division:", divides(num1, num2));

const multiplies = (num1, num2) => {
  let multiplication = num1 * num2;
  return multiplication;
};
console.log("Multiplication:", multiplies(num1, num2));
```
✔️ **OUTPUT**

![Output](https://github.com/swayamterode/Codes/blob/main/Languages/JavaScript/pages/function/exercise/Functions.png)
