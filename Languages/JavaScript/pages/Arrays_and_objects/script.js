// ▄▀█ █▀█ █▀█ ▄▀█ █▄█ █▀
// █▀█ █▀▄ █▀▄ █▀█ ░█░ ▄█

console.log("ARRAYS\n\n----------------------------------");
const groceries = ["Grapes", "Banana", "Apple", "Pineapple"];
console.log("Elements in Array:", groceries);

//Push function

groceries.push("Watermellon");
console.log("Elements after adding one element in Array:", groceries);
console.log("\n");

//slice Function
console.log("SLICE ()\n");
console.log("Elements in Array:", groceries);
//slice
let slice = groceries.slice(1, groceries.length);
console.log(slice);
console.log("\n");

slice = groceries.slice(2, groceries.length - 1);
console.log(slice);
console.log("\n");

//Array methods
//indexOf, length

console.log("Elements in Array:", groceries);
console.log("indexOf Banana:", groceries.indexOf("Banana"));
console.log("indexOf Apple:", groceries.indexOf("Apple"));

//length
console.log("Size of Arrays:", groceries.length);

console.log("\n----------------------------------\n");

// █▀█ █▄▄ ░░█ █▀▀ █▀▀ ▀█▀ █▀
// █▄█ █▄█ █▄█ ██▄ █▄▄ ░█░ ▄█
console.log("OBJECTS\n---------------------------------");
//access objects : dot notation vs bracket notation
const person = {
  name: "Swayam",
  shirt: "White",
};
console.log(person.name); //Swayam
console.log(person.shirt); //White
console.log(person["name"]); //Swayam
console.log(person["shirt"]); //White

person.phone_number = "7796220741";
console.log(person.phone_number); //7796220741
person["phone_number"] = "7796224541";
console.log(person.phone_number); //7796220741
console.log(person);

//person2

const person2 = {
  name: "Drake",
  shirt: "black",
};

console.log(person2.name); //Drake
console.log(person2["shirt"]); //black
console.log(person2);

const introducer = (name, shirt) => {
  const detail = {
    name: name,
    shirt: shirt,
    assets: 100000,
    debt: 50000,
    netWorth: function () {
      return this.assets - this.debt;
    },
  };
  const intro = `Hi My name is ${detail.name} and color of my shirt is ${
    detail.shirt
  } and my net worth is $${detail.netWorth()} USD`;
  return intro;
};

console.log(introducer("Swayam", "Black"));

// const leo = (name, shirt) => {
//   const person = {
//     name: name,
//     shirt: shirt,
//   };
//   const personIntro = `Hi my name is ${person.name} and my shirt color is ${person.shirt}`;
//   return personIntro;
// };

// console.log(leo("Leo", "Pink"));
