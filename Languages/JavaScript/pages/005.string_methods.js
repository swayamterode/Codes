//trim() - used to remove spaces in the string!
let firstName = "   Swayam  "; //tabspace_Swayam_tabspace
console.log("Total string length:", firstName.length); //11
console.log("String with spaces!", firstName);
firstName = firstName.trim(); //declaration
console.log("Spaces removed using trim():", firstName.length); //6
console.log("String without spaces!", firstName); //Swayam
console.log("---------------------------");

//toUpperCase()
let newName = "Batman";
console.log("String contains:", newName);
newName = newName.toUpperCase(); //String converted to Uppercase!
console.log("Used toUpperCase()", newName); //output
console.log("---------------------------");

//toLowerCase()
let user1 = newName;
console.log("String contains:", user1);
user1 = user1.toLowerCase();
console.log("Used toLowerCase()", user1);
console.log("---------------------------");

//slice() - used to output char of string from particular index to particular index
let user2 = newName;
console.log("String contains:", user2);
user2 = user2.slice(0, 4);
console.log("Used slice()", user2);
console.log("---------------------------");
