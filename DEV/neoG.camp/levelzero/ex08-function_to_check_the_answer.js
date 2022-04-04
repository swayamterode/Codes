var readlineSync = require("readline-sync");
var score = 0;
function fun(question, answer) {
  var userAnswer = readlineSync.question(question);
  if (userAnswer === answer) {
    console.log("You are right!");
    score++;
  } else {
    console.log("You are wrong!");
    score--;
  }
}
fun("Which city do I study in?\n ", "Pune");
fun("what is my college name?\n", "GHRCEM");
console.log("The total score of user is: " + score);
