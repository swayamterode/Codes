# Getting Started 🚀
## [1.Print Z](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/0.Basics%20of%20Programming/1.Getting%20Started/1.Print_Z.cpp)

<details>
<summary>Click to expand!</summary>
  
##  Question

``` plan text 
You are required to print a 'z' of size 5 using '*'
``` 

  
## Input Format

``` Plain text
There is no input
```
  
## Output Format

``` c++
*****
   *
  *
 *
*****
```

## Constraints

```
No Constraints
```
  
<h2>Editorial</h2>
<details>
<summary>Click to expand!</summary>

## "The art of programming is nothing but doing the simplest thing that could work!"

## Question:

  ``` plain text
You are required to print a 'z' of size 5 using '*'
  ```
  
## Input format:
  
``` C++
There is no input
```
  
## Output Format

``` c++
*****
   *
  *
 *
*****
```

## Constraints:

```C++
No Constraints
```

## Solution approach:

The procedure here is very simple and easy to understand. We have to print a z having a size of 5 The terminal rows of the figure contain the maximum numbers of stars which also marks the size of the figure (5 in the given problem).

We simply make use of our printing statement `cout`
  
</details>
</details>



## [2.Grading System](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/0.Basics%20of%20Programming/1.Getting%20Started/2.Grading_System.cpp)
<details>
<summary>Click to expand!</summary>
  
## Question
  
``` plain text
  
1. You are given as input marks of a student.
2. Display an appropriate message based on the following rules:
  	  2.1 for marks above 90, print excellent.
  	  2.2 for marks above 80 and less than equal to 90, print good.
  	  2.3 for marks above 70 and less than equal to 80, print fair.
  	  2.4 for marks above 60 and less than equal to 70, print meets expectations.
  	  2.5 for marks less than equal to 60, print below par.
```
  
## Input Format
  
 ``` plan text 
Input is handled for you and provided as variable marks
```  
  
## Output Format
  
``` plain text    
Appropriate message as per student's marks
Question Video
```

## Constraints

``` plain text
No constraints
```
  
## Sample Input
  
``` plain text
92
```
  
## Sample Output
  
``` plain text
excellent
```   
  
<h2>Editorial</h2>

<details>
<summary>Click to expand!</summary>
  
## "What makes a child gifted and talented may not be good grades in school, but a different way of looking at the world and learning!"

### Question:
``` plain text
1. You are given as input marks of a student.

2. Display an appropriate message based on the following rules:

    2.1 for marks above 90 print excellent.

    2.2 for marks above 80 and less than equal to 90 print good.

    2.3 for marks above 70 and less than equal to 80, print fair.

    2.4 for marks above 60 and less than equal to 70, print meets expectations.

    2.5 for marks less than equal to 60, print below par.
```
  
### Input format:

  ``` plain text
Input is handled for you and provided as variable marks
```
  
### Output format:

``` plain text
Appropriate message as per student's marks
```
### Constraints:
``` plain tex
No Constraints
```
This is a classical conditional problem where the output is dependent on the conditions that are placed on the user input.In programming, conditional problems are solved using an if-else-then method or a switch case method. But here, we use the if-then-else methodology to find the solution to the given problem.

  
An if-else-then problem is tackled on the basis of the given conditions and the instructions that are to be executed on the basis of these conditions:

  
The condition first meets an IF-block which compares the condition or required parameters accordingly and on the basis of the result of that comparison, instructions as to what to follow are written in that if block.If the conditions are not met or the comparison turns out to be false in nature, the program flow ignores the "if block" entirely and moves onto the next program lines.
  

Now, after this, we provide either an else-if block for further comparison or write an else block which basically means as to what the program is supposed to do if or when the comparison in the if-block done turns out to be false.

The else-if block further makes a comparison according to the parameters provided to it and works like an if-block only.But the else block does not require any comparisons or comparing conditions.It executes its instructions only if the "if block" comparison comes out false, else it is disregarded completely in a similar fashion as to how if-block instructions are ignored when the if condition comes out false.

  
``` plain text
//Syntax-wise if-else-then methodology
                                
if (some conditional comparison) { // like x == 5
// Instructions to be executed if the conditional comparison met is true
} else if (some comparison) { // x == 7
  // Instructions to be executed
} else { // No comparison required here
//Instructions to be executed if the above two come out false
}
```
  
So this is how the if-else-then methodology is implemented in C++.
  
Now we have to fuse the above algorithm with the governing laws of our programming language (C++ here) for the completion of the required code: [Grading System](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/0.Basics%20of%20Programming/1.Getting%20Started/2.Grading_System.cpp)

</details>

</details>


