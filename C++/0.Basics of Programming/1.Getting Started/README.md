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

## [3.Is A Number Prime](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/0.Basics%20of%20Programming/1.Getting%20Started/3.Is_A_Number_Prime.cpp)

<details>
<summary>Click to expand!</summary>
  
## Question :
 
  ``` plain text
1. You've to check whether a given number is prime or not.
2. Take a number "t" as input representing count of input numbers to be tested.
3. Take a number "n" as input "t" number of times.
4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.
```
  
## Input Format
 
  ``` plain text
A number t
A number n
A number n
.. t number of times
  ```
  
## Output Format
  
``` plain text
prime
not prime
not prime
.. t number of times
```
  
## Constraints
  ``` plain text
1 <= t <= 10000
2 <= n < 10^9
  ```
  
## Sample Input
  ``` plain text
5
13
2
3
4
5
  ```
  
## Sample Output
``` plain text
prime
prime
prime
not prime
prime
```

  
</detials>

<h2>Editorial</h2>

<details>
<summary>Click to expand!</summary>
  
## "Prime numbers are like life. They are very logical but you can never work out the rules, even if you spent all your time thinking about them."

## Problem statement:
  
``` plain text
You've to check whether a given number is prime or not.
Take a number "t" as input representing the count of input numbers to be tested.
Take a number "n" as input "t" number of times.
For each input value of n, print "prime" if the number is prime and "not prime" otherwise.
```
  
##  Input format:

  ``` plain text
A number t

A number n

A number n

.. t number of times

```

## Constraints:
  
```plain text
1 <= t <= 10000

2 <= n < 10^9
```
  
## Output:
  
``` plain text
Display "prime" for a prime number input and "not prime" for otherwise.
```
  
## Solution Approach:

A prime number is one that is only divisible by itself and 1.1 is neither prime nor composite, but for the sake of this program, we will print "prime" for the input value of 1.A prime number has only two factors: itself and 1.



Checking a number for being prime or not is called a Primality Test. There are several kinds of primality tests but we will focus on the simple and basic ones first. We will take input value t for which we will initialize a for loop from 0 to t-1 to take the "t" number of "n" input numbers from the user.



If the number of divisors the number n turns up more than 2 ( that is apart from 1 and n itself), we can say that the number is "not prime", else it is "prime".


The given constraints on the variables t and n are too large for the computational power to compute within 1 second.

The processor has the computational power to compute about 10^9 operations within 1 second, This is due to the fact that it runs 3*10^9 clockcycles/sec.

Our code returns a Time Limit Exceeded(TLE) error because it takes too much time to compute.

"Not only should our program be correct but also effectively time and memory-efficient"

Below, it is illustrated as to how many times a loop will be running.

The outer loop runs 10^4 times(depends on t). The inner loop runs 10^9 times (depends on n).

And the Instructions inside the inner loop run for 10^4*10^9=10^13 times, which cannot be computed in 1 second.

  
Output of Above Code
To overcome this TLE problem, we need to find a superior primality test.

Notice one thing, in the factorization of 36,



So, we can use this fact by twisting it as that if a number is non-prime, it will be divided by a number smaller than or equal to its square-root(or the closest integer value to it), and if it cannot be divided, it can be said that the number is prime.

We will start off with a divisor variable called "div" and initialize it to 2. Now in the second phase of the loop, (which checks the termination condition in for loop) instead of checking div with sqrt(n ), we can compare if the iterating variable is smaller or larger than the div^2 variable.

After that, we check if the number is divisible by div evenly. If it is, we increase the count. At the end of the loop, we check if get any divisors for our number. If the count is anywhere incremented, it means the number is non-prime. Otherwise, it is prime.


Now while this code will certainly bring down our time complexity inside 1 second, we can clearly see that, once we get a divisor (any div that divides n evenly), we don't need more iteration in the loop and we can simply adjudge the number to be non-prime.

For achieving this, we use a special keyword "break".

A break helps us terminate the loop prematurely as we don't require further iterations and exit the loop as soon as we discover a divisor for n.

Along with break, we can use a Boolean variable and call it a flag. A Boolean variable is one that only takes two values either true or false; one at a time (could be 1 or 0 respectively).

We generally call it a flag, because like in medieval times, a fort captured by a raiding party was symbolized by a change in flag hung in the fort. Similarly, if our objective is completed, we can change our flag's status and this flag value can be used by the program to judge the outcome (Here to find whether the number is prime or not prime).


The flag is declared outside the divisor computing loop because on the basis of the divisor computation result, the status of the flag variable is set (true if Prime, false if not prime).

Finally, we can also instead of using all these extra variables (like flag and count), just check the number on the basis of its size comparison with div^2.If the number is smaller than div^2, we print "prime" as the number is prime.But if the number 'n' is larger, we try and divide the number by the "div" variable.

  
If n is evenly divisible by div, we print "prime". Else we print "not prime".


There are a lot more methods to check for the primality of numbers. Try and devise them
  
</detials>
</details>
</details>


## [4.Count Digits In A Number](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/0.Basics%20of%20Programming/1.Getting%20Started/4.Count_digits.cpp)

<details>
<summary>Click to expand!</summary>
  
## Question :
  
  ``` plain text
1. You've to count the number of digits in a number.
2. Take as input "n", the number for which the digits has to be counted.
3. Print the digits in that number.
```
  ## Input Format
  ``` plain text
"n" where n is any integer.
  ```
  
## Output Format

``` plain text
"d" where d is the number of digits in the number "n"
```

## Constraints

  ``` plain text
  1 <= n < 10^9
  ```
  
## Sample Input
  
  ``` plain text
65784383
  ```
  
## Sample Output
  
  ``` plain text
8
```
  
</detials>

<h2>Editorial</h2>

<details>
<summary>Click to expand!</summary>
  
## "Number is the ruler of forms and ideas and the cause of gods and demons."

## Question:
  
``` plain text
You have to count the number of digits in a number.
Take as input "n", the number for which the digits has to be counted.
Print the digits in that number.
Input format

"n" where n is any integer
```
  
## Output format

  ``` plain text
"d" where d is the number of digits in the number "n"
```
  
## Constraints
  
``` plain text
1 <= n <= 10^9
```
  
## Solution Approach:

For finding out the number of digits present in a number, we count the number of times that number is divisible by 10.The count would give us the number of digits constituting the given number.

For example: we are given 9543

It is divided 4 times by 10 & contains 4 digits.

"Every division strips out the last digit"


So, we can effectively conclude that by continuously dividing a number and keeping a count of number of division operations until the dividend turns to 0 will give us the number of digits it is composed of in the form of number of division operations executed.


</detials>
</details>
</details>

## [5.Digits Of A Number](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/0.Basics%20of%20Programming/1.Getting%20Started/5.Digits_Of_A_Number.cpp)

<details>
<summary>Click to expand!</summary>

  
  ``` plain text
1. You've to display the digits of a number.
2. Take as input "n", the number for which digits have to be displayed.
3. Print the digits of the number line-wise.
```
  
  ### Input Format
  
``` plain text
"n" where n is any integer.
```
  
## Output Format
  ``` Plain text
d1
d2
d3
... digits of the number
```
## Constraints

  ``` plain text
1 <= n < 10^9
  ```
  
## Sample Input

  ``` plain text
65784383
```
## Sample Output

  ``` plain text
6
5
7
8
4
3
8
3
```
  
</detials>


<h2>Editorial</h2>

<details>
<summary>Click to expand!</summary>
  
## "Numbers constitute the only universal language. They rule the universe."

## Question:
  
``` plain text

You've to display the digits of a number.
Take as input "n", the number for which digits have to be displayed.
Print the digits of the number line-wise.
```
  
 ## Input format
  
``` plain text

"n" where n is any integer
```
  
## Output format
  
``` plain text
d1

d2

d3

... digits of the number

```
  
## Constraints

``` plain text
1 <= n <= 10^9
```
  
## Solution Approach:

We have to print a given number from left to right in a vertical fashion. For instance, let us take 754 We start dividing it with 100(10^(3-1)) where 3 is the number of digits in 754. After each division, the divisor is divided by 10. So our objective is cleared as to first, we have to find the number of digits in the given number.

Then, we start dividing with 10^(number of digits-1)as the first divisor and subsequently modifying the divisor by dividing it by 10 and storing the number n as the remainder of the division that was performed on it. We keep this up until the divisor becomes 0. To count the number of digits in the number, we consistently divide the number by 10 until it becomes 0 and count the number of division operations performed on the number. The number of division operations performed gives us the number of digits in the number.


Instead of increasing the power of the divisor as done in earlier solution, we can count the number of digits and then use the Math.pow() function typecasted in (int) to set the divisor for the first division.
  
</detials>
</detials>
</detials>

