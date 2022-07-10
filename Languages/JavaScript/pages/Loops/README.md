# Loops

## for Loops

<details>

```js
const fruits = ["Grapes", "Mango", "Apple", "Pineapple", "Guava"];
console.log("Array contains", fruits); //prints all the element in the Array

//output of Array with Index
for (let i = 0; i < fruits.length; i++) {
  console.log("Fruits at index", i, fruits[i]);
}
```

**New Syntax:** 🔥

> ```js
> console.log("\nNew Method:\n\n");
> //for loop Syntax
> for (const fruit of fruits) {
>   console.log(fruit);
> }
> ```

```js
const Numbers = [1, 2, 3, 4, 5, 6];
console.log("\nNumbers: \n\n");
console.log(Numbers);
console.log("\nNumbers are doubled:\n\n");

let result = [];

for (const number of Numbers) {
  result.push(number * 2);
}
console.log(result);

// ▀█▀ █▀█ █ █▀█ █░░ █▀▀   █▀▀ █░█ █▄░█ █▀▀ ▀█▀ █ █▀█ █▄░█
// ░█░ █▀▄ █ █▀▀ █▄▄ ██▄   █▀░ █▄█ █░▀█ █▄▄ ░█░ █ █▄█ █░▀█

console.log("\nFunction Triple: \n\n");
console.log("\nNumbers: \n\n");
console.log(Numbers);

console.log("\nTriple of each Number: \n\n");
const double = (Numbers) => {
  let result = [];
  for (const number of Numbers) {
    result.push(number * 3);
  }
  return result;
};

console.log(double([1, 2, 3, 4, 5, 6]));
```

✔️ **OUTPUT**

![forLoop](https://github.com/swayamterode/Codes/blob/main/Languages/JavaScript/pages/Loops/img/001.for_loop_output.PNG)

![forLoop](https://github.com/swayamterode/Codes/blob/main/Languages/JavaScript/pages/Loops/img/002.for_loop_output.PNG)

</details>
