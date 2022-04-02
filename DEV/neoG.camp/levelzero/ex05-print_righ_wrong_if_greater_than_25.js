var readlineSync = require("readline-sync");
var userAge = readlineSync.question("Is your age greater than equal to 25? \n");

if (userAge === "Yes") {
  console.log("Users age is greater or greater than equal to 25\n");
} else {
  console.log("No the users Age is not greater than 25.\n");
}
