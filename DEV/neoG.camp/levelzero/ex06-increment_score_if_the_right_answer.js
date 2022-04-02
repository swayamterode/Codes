var readlineSync = require('readline-sync');
var state = "Maharashtra";
var stateofUser = readlineSync.question('Which State of India do you belong to? \n ');
var score = 0;

if (stateofUser == "Maharashtra"){
    score++;
    console.log("The city of user is " + stateofUser);
    console.log("Hence the score of User is: "+ score);
}
else {
    score--;
    console.log("Since you are not from " + state + "\n");
    console.log("Your socre is: " + score);
}
