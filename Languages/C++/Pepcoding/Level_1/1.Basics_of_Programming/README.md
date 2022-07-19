# Basics of Programming

## Getting Started

<details>

### 1. Print Z

<details>
<summary>Click to expand </summary>
  
**Question:**
  
  ``` text
  1. You are required to print a 'z' of size 5 using '*'.
  ```
  
**Input Format:**
  
  ``` text
  There is no input
  ```

**Constraints:**

```text
No Constraints
```

**Sample Output:**

```text
*****
   *
  *
 *
*****
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/01.Print_Z.cpp)

</details>
  
### 2. Grading System
  
<details>
<summary>Click to expand!</summary>
  
**Question:**
  
``` text
1. You are given as input marks of a student.
2. Display an appropriate message based on the following rules:
2.1 for marks above 90, print excellent.
2.2 for marks above 80 and less than equal to 90, print good.
2.3 for marks above 70 and less than equal to 80, print fair.
2.4 for marks above 60 and less than equal to 70, print meets expectations.
2.5 for marks less than equal to 60, print below par.
```

**Input Format:**

```text
Input is handled for you and provided as variable marks
```

**Output Format:**

```text
  Appropriate message as per student's marks
```

**Constraints:**

```text
No constraints
```

**Sample Input:**

```text
92
```

**Sample Output:**

```text
excellent
```

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/02.Grading_System.cpp)

</details>

### 3. Is A Number Prime

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You've to check whether a given number is prime or not.
2. Take a number "t" as input representing count of input numbers to be tested.
3. Take a number "n" as input "t" number of times.
4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.
```

**Input Format:**

```text
A number t
A number n
A number n
.. t number of times
```

**Output Format:**

```text
prime
not prime
not prime
.. t number of times
```

**Constraints:**

```text
1 <= t <= 10000
2 <= n < 10^9
```

**Sample Input:**

```text
5
13
2
3
4
5
```

**Sample Output:**

```text
prime
prime
prime
not prime
prime
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/03.Is_A_Number_Prime.cpp)

</details>

### 4. Print All Primes Till N

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You've to print all prime numbers between a range.
2. Take as input "low", the lower limit of range.
3. Take as input "high", the higher limit of range.
4. For the range print all the primes numbers between low and high (both included).
```

**Input Format:**

```text
low
high

```

**Output Format:**

```text
n1
n2
.. all primes between low and high (both included)
```

**Constraints:**

```text
2 <= low < high < 10 ^ 6
```

**Sample Input:**

```text
6
24
```

**Sample Output:**

```text
7
11
13
17
19
23
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/04.Print_All_Primes_Till_N.cpp)

</details>

### 5. Print Fibonacci Numbers Till N

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You've to print first n fibonacci numbers.
2. Take as input "n", the count of fibonacci numbers to print.
3. Print first n fibonacci numbers.
```

**Input Format:**

```text
n
```

**Output Format:**

```text
0
1
1
2
3
5
8
.. first n fibonaccis
```

**Constraints:**

```text
1 <= n < 40
```

**Sample Input:**

```text
10
```

**Sample Output:**

```text
0
1
1
2
3
5
8
13
21
34
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/05.Print_Fibonacci_Numbers_Till_N.cpp)

---

  </details>

### 6. Count Digits In A Number

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You've to count the number of digits in a number.
2. Take as input "n", the number for which the digits has to be counted.
3. Print the digits in that number.
```

**Input Format:**

```text
"n" where n is any integer.
```

**Output Format:**

```text
"d" where d is the number of digits in the number "n"
```

**Constraints:**

```text
1 <= n < 10^9
```

**Sample Input:**

```text
65784383
```

**Sample Output:**

```text
8
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/06.Count_Digits_In_A_Number.cpp)

</details>

### 7. Digits Of A Number

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You've to display the digits of a number.
2. Take as input "n", the number for which digits have to be displayed.
3. Print the digits of the number line-wise.
```

**Input Format:**

```text
"n" where n is any integer.
```

**Output Format:**

```text
d1
d2
d3
... digits of the number
```

**Constraints:**

```text
1 <= n < 10^9
```

**Sample Input:**

```text
65784383
```

**Sample Output:**

```text
6
5
7
8
4
3
8
3
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/07.Digits_Of_A_Number.cpp)

---

  </details>

### 8. Reverse A Number

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You've to display the digits of a number in reverse.
2. Take as input "n", the number for which digits have to be display in reverse.
3. Print the digits of the number line-wise, but in reverse order.
```

**Input Format:**

```text
"n" where n is any integer.
```

**Output Format:**

```text
d1
d2
d3
... digits of the number in reverse
```

**Constraints:**

```text
1 <= n < 10^9
```

**Sample Input:**

```text
65784383
```

**Sample Output:**

```text
3
8
3
4
8
7
5
6
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/08.Reverse_A_Number.cpp)

</details>

### 9. Inverse Of A Number

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You are given a number following certain constraints.
2. The key constraint is if the number is 5 digits long, it'll contain all the digits from 1 to 5 without missing any and without repeating any.
e.g. 23415 is a 5 digit long number containing all digits from 1 to 5 without missing and repeating any digit from 1 to 5.
Take a look at few other valid numbers - 624135, 81456273 etc.Here are a few invalid numbers - 139, 7421357 etc.
3. The inverse of a number is defined as the number created by interchanging the face value and index of digits of number.e.g. for 426135 (reading from right to left, 5 is in place 1, 3 is in place 2, 1 is in place 3, 6 is in place 4, 2 is in place 5 and 4 is in place 6),
the inverse will be 416253 (reading from right to left, 3 is in place 1, 5 is in place 2,2 is in place 3, 6 is in place 4, 1 is in place 5 and 4 is in place 6) More examples - inverse of 2134 is 1243 and inverse of 24153 is 24153
4. Take as input number "n", assume that the number will follow constraints.
5. Print it's inverse.
```

**Input Format:**

```text
"n" where n is any integer, following constraints defined above.
```

**Output Format:**

```text
"i", the inverted number
```

**Constraints:**

```text
1 <= n < 10^8, and follwing other constraints defined above.
```

**Sample Input:**

```text
28346751
```

**Sample Output:**

```text
73425681
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/09.Inverse_Of_A_Number.cpp)

  </details>

### 10. Rotate A Number

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You are given two numbers n and k. You are required to rotate n, k times to the right.
If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost.
Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.
2. Take as input n and k.
3. Print the rotated number.
4. Note - Assume that the number of rotations will not cause leading 0's in the result. e.g. such an input will not be given
   n = 12340056
   k = 3
   r = 05612340
```

**Input Format:**

```text
"n" where n is any integer.
"K" where k is any integer.
```

**Output Format:**

```text
"r", the rotated number
```

**Constraints:**

```text
1 <= n < 10^9
-10^9 < k < 10^9
```

**Sample Input:**

```text
562984
2
```

**Sample Output:**

```text
845629
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/10.Rotate_A_Number.cpp)

</details>

### 11. Gcd And Lcm

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You are required to print the Greatest Common Divisor (GCD) of two numbers.
2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers.
3. Take input "num1" and "num2" as the two numbers.
4. Print their GCD and LCM.
```

**Input Format:**

```text
num1
num2
.. the numbers whose GCD and LCM we have to find.
```

**Output Format:**

```text
a
b
.. where 'a' and 'b' are the GCD and LCM respectively.
```

**Constraints:**

```text
2 <= n <= 10^9
```

**Sample Input:**

```text
36
24
```

**Sample Output:**

```text
12
72
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/11.Gcd_And_Lcm.cpp)

</details>

### 12. Prime Factorization Of A Number

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You are required to display the prime factorization of a number.
2. Take as input a number n.
3. Print all its prime factors from smallest to largest.
```

**Input Format:**

```text
n, an integer
```

**Output Format:**

```text
p1  p2  p3  p4.. all prime factors of n
```

**Constraints:**

```text
2 <= n < 10 ^ 9
```

**Sample Input:**

```text
1440
```

**Sample Output:**

```text
2 2 2 2 2 3 3 5
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/12.Prime_Factorization_Of_A_Number.cpp)

</details>

### 13. The Curious Case Of Benjamin Bulbs

<details>
<summary>Click to expand!</summary>

**Question:**

```text
1. You are given n number of bulbs. They are all switched off. A weird fluctuation in voltage hits the circuit n times. In the 1st fluctuation all bulbs are toggled, in the 2nd fluctuation every 2nd bulb is toggled, in the 3rd fluctuation every 3rd bulb is toggled and so on. You've to find which bulbs will be switched on after n fluctuations.
2. Take as input a number n, representing the number of bulbs.
3. Print all the bulbs that will be on after the nth fluctuation in voltage.
```

**Input Format:**

```text
n, an integer
```

**Output Format:**

```text
b1 b2 b3 b4 .. all bulbs that will be on after nth wave
```

**Constraints:**

```text
2 <= n < 10^9
```

**Sample Input:**

```text
6
```

**Sample Output:**

```text
1
4
```

Try out first then see the **solution**.

[**Solution ✔️**](../1.Basics_of_Programming/1.Getting_Started/14.The_Curious_Case_Of_Benjamin_Bulbs.cpp)

</details>

</details>
