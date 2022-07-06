// user input
food = Number(prompt("Total cost of food")); //Sting get converted to Number 
tipPercentage = Number(prompt('tip%?')) / 100; //Sting get converted to Number
tipAmount = food * tipPercentage;

console.log("Tip:",tipAmount);
//alert(tipAmount); pops up an alert
total = food + tipAmount;
console.log("Total",total); //output
