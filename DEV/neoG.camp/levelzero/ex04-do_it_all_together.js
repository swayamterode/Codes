var readlineSync = require('readline-sync');
var username = readlineSync.question('May I know your name?\n');
var  userWelcome = "Welcome " + username + " Nice to meet you!";
console.log(userWelcome);