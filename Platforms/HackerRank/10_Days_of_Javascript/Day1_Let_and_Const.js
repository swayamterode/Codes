'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    // Write your code here. Read input using 'readLine()' and print output using 'console.log()'.
    let  r = readLine();
    const PI = Math.PI;
    // Print the area of the circle:
    let area = PI * (r * r);
    console.log(area);
    // Print the perimeter of the circle:
    let perimeter = 2 * PI * r;
    console.log(perimeter);
    try {    