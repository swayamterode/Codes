# Basics of Programming

## Getting Started

<details>

### 1. Print Z

<details>

**Question:**

```text
1. You are required to print a 'z' of size 5 using '*'.
```

**Input Format:**

```text
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

## Patterns

<details>

### Pattern 1

<details>

**Format:**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format:**

```text
A number n
```

**Constraints:**

```text
1 <= n <= 44
```

**Sample Input:**

```text
5
```

**Output Format:**

```text
*
*   *
*   *   *
*   *   *   *
*   *   *   *   *
```

**Solution :**

<details>

```cpp
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*    ";
        }
        cout<<endl;
    }
```

[Detailed Solution](../1.Basics_of_Programming/2.Patterns/01.Pattern_1.cpp)

</details>

</details>

### Pattern 2

<details>

**Format :**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format :**

```text
A number n
```

**Constraints :**

```text
1 <= n <= 44
```

**Sample Input :**

```text
5
```

**Output Format :**

```text
*   *   *   *   *
*   *   *   *
*   *   *
*   *
*
```

**Solution :**

<details>

```cpp
for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < star; j++)
        {
            cout << "*\t";
        }
        star--;
        cout << endl;
    }
```

[Full Solution](../1.Basics_of_Programming/2.Patterns/02.Pattern_2.cpp)

</details>

</details>

### Pattern 3

<details>

**Format :**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format :**

```text
A number n
```

**Constraints :**

```text
1 <= n <= 44
```

**Sample Input :**

```text
5
```

**Output Format :**

```cpp
                *
            *   *
        *   *   *
   *    *   *   *
*  *    *   *   *
```

**Solution :**

```cpp
int space = n - 1;
  int star = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= space; j++) {
      cout << "\t";
    }
    for (int k = 1; k <= star; k++) {
      cout << "*\t";
    }
    cout << endl;
    space--;
    star++;
  }
```

[Detailed Solution](../1.Basics_of_Programming/2.Patterns/03.Pattern_3.cpp)

</details>

### Pattern 4

<details>

**Format :**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format :**

```text
A number n
```

**Constraints :**

```text
1 <= n <= 100
```

**Sample Input :**

```text
5
```

**Output Format :**

```text
*   *   *   *   *
    *   *   *   *
        *   *   *
            *   *
                *
```

**Solution** ☑️

<details>

```cpp
int star = n;
  int space = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < space; j++)
    {
      cout << "\t";
    }
    for (int k = 1; k <= star; k++)
    {
      cout << "*\t";
    }
    cout << endl;
    space++;
    star--;
  }
```

[Full Solution](../1.Basics_of_Programming/2.Patterns/04.Pattern_4.cpp)

</details>

</details>

### Pattern 5

<details>

**Format :**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format :**

```text
A number n
```

**Constraints :**

```text
1 <= n <= 44
```

**Sample Input :**

```text
5
```

**Output Format :**

```cpp
        *
    *   *   *
*   *   *   *   *
    *   *   *
        *
```

**Solution** ☑️

<details>

```cpp
int space = n / 2;
  int star = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= space; j++)
    {
      cout << "\t";
    }
    for (int j = 1; j <= star; j++)
    {
      cout << "*\t";
    }
    cout << endl;

    if (i <= n / 2)
    {
      space--;
      star += 2;
    }
    else
    {
      space++;
      star -= 2;
    }
  }
```

[Full Solution](../1.Basics_of_Programming/2.Patterns/05.Pattern_5.cpp)

</details>

</details>

### Pattern 6

<details>

**Format :**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format :**

```text
A number n
```

**Constraints :**

```text

1 <= n <= 100
Also, n is odd.

```

**Sample Input:**

```text

5

```

**Output Format:**

```text

*   *   *       *   *   *
*   *               *   *
*                       *
*   *               *   *
*   *   *       *   *   *

```

**Solution** ☑️

<details>

```cpp
int space = 1;
  int stars = (n / 2) + 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= stars; j++)
    {
      cout << "*\t";
    }
    for (int j = 1; j <= space; j++)
    {
      cout << "\t";
    }
    for (int j = 1; j <= stars; j++)
    {
      cout << "*\t";
    }

    if (i <= n / 2)
    {
      space += 2;
      stars--;
    }
    else
    {
      space -= 2;
      stars++;
    }
    cout << endl;
  }
```

[Full Solution](../1.Basics_of_Programming/2.Patterns/06.Pattern_6.cpp)

</details>

</details>

### Pattern 7

<details>

**Format :**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format :**

```text
A number n
```

**Constraints :**

```text
1 <= n <= 100
```

**Sample Input :**

```text
5
```

**Output Format :**

```text
*
    *
        *
            *
                *

```

**Solution** ☑️

<details>

```cpp
for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == j)
      {
        cout << "*\t";
        break;
      }
      else
      {
        cout << "\t";
      }
    }
    cout << endl;
  }
```

[Full Solution](../1.Basics_of_Programming/2.Patterns/07.Pattern_7.cpp)

</details>

</details>

### Pattern 8

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
                *
            *
        *
    *
*
```

**Constraints:**

```text
1 <= n <= 100
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
                *
            *
        *
    *
*
```

Try out first then see the **solution**.

**Solution** ☑️

<details>

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i + j == n + 1) {
        cout << "*\t";
      }
      else {
        cout << "\t";
      }

    }
    cout << endl;
  }
```

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/08.Pattern_8.cpp)

</details>

 </details>

### Pattern 9

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
*               *
    *       *
        *
    *       *
*               *
```

**Constraints:**

```text
1 <= n <= 100
 Also, n is odd.
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
*               *
    *       *
        *
    *       *
*               *
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/09.Pattern_9.cpp)

</details>

### Pattern 10

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
        *
    *       *
*               *
    *       *
        *
```

**Constraints:**

```text
1 <= n <= 100
Also, n is odd.
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
        *
    *       *
*               *
    *       *
        *
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/10.Pattern_10.cpp)

</details>

### Pattern 11

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
1
2   3
4   5   6
7   8   9   10
. . .
```

**Constraints:**

```text
1 <= n <= 44
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
1
2   3
4   5   6
7   8   9   10
11  12  13  14 15
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/11.Pattern_11.cpp)

</details>

### Pattern 12

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
0
1   1
2   3    5
8   13   21   34
55  89   . . .
```

**Constraints:**

```text
1 <= n <= 5
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
0
1   1
2   3    5
8   13   21   34
55  89   144  233   377
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/12.Pattern_12.cpp)

</details>

### Pattern 13

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
```

**Constraints:**

```text
1 <= n <= 20
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/13.Pattern_13.cpp)

 </details>

### Pattern 14

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```text
x * 1 = 1x
x * 2 = 2x
x * 3 = 3x
x * 4 = 4x
. .
```

**Constraints:**

```text
1 <= n <= 10
```

**Sample Input:**

```text
3
```

**Sample Output:**

```cpp
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27
3 * 10 = 30
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/14.Pattern_14.cpp)

</details>

### Pattern 15

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
        1
    2   3   2
3   4   5   4   3
    2   3   2
        1
```

**Constraints:**

```text
1 <= n <= 10
Also, n is odd.
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
        1
    2   3   2
3   4   5   4   3
    2   3   2
        1
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/15.Pattern_15.cpp)

</details>

### Pattern 16

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
1                                               1
1   2                                       2   1
1   2   3                               3   2   1
1   2   3   4                       4   3   2   1
1   2   3   4   5               5   4   3   2   1
1   2   3   4   5   6       6   5   4   3   2   1
1   2   3   4   5   6   7   6   5   4   3   2   1
```

**Constraints:**

```text
1 <= n <= 10
```

**Sample Input:**

```text
7
```

**Sample Output:**

```cpp
1                                               1
1   2                                       2   1
1   2   3                               3   2   1
1   2   3   4                       4   3   2   1
1   2   3   4   5               5   4   3   2   1
1   2   3   4   5   6       6   5   4   3   2   1
1   2   3   4   5   6   7   6   5   4   3   2   1
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/16.Pattern_16.cpp)

</details>

### Pattern 17

<details>

**Question:**

```text
1. You are given a number n.
2. You've to write code to print the pattern given in output format below.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
        *
        *   *
*   *   *   *   *
        *   *
        *
```

**Constraints:**

```text
1 <= n <= 10
Also, n is odd.
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
        *
        *   *
*   *   *   *   *
        *   *
        *
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/17.Pattern_17.cpp)

</details>

### Pattern 18

<details>

**Question:**

```text
1. You are given a number n.
2. You've to create a pattern as shown in output format.
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
*   *   *   *   *   *   *
    *               *
        *       *
            *
        *   *   *
    *   *   *   *   *
*   *   *   *   *   *   *
```

**Constraints:**

```text
1 <= n <= 44
```

**Sample Input:**

```text
7
```

**Sample Output:**

```cpp
*   *   *   *   *   *   *
    *               *
        *       *
            *
        *   *   *
    *   *   *   *   *
*   *   *   *   *   *   *
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/18.Pattern_18.cpp)

</details>

### Pattern 19

<details>

**Question:**

```text
1. You are given a number n.
2. You've to write code to print the pattern given in output format below
```

**Input Format:**

```text
A number n
```

**Output Format:**

```text

```

**Constraints:**

```text
1 <= n <= 10
 Also, n is odd.
```

**Sample Input:**

```text
3
```

**Sample Output:**

```cpp
*   *   *
*   *   *
*   *   *
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/19.Pattern_19.cpp)

</details>

### Pattern 20

<details>

**Question:**

```text
1. You are given a number n.
2. You've to write code to print the pattern given in output format below
```

**Input Format:**

```text
A number n
```

**Output Format:**

```cpp
*               *
*               *
*       *       *
*   *       *   *
*               *
```

**Constraints:**

```text
1 <= n <= 10
Also, n is odd.
```

**Sample Input:**

```text
5
```

**Sample Output:**

```cpp
*               *
*               *
*       *       *
*   *       *   *
*               *
```

Try out first then see the **solution**.

[Solution ✔️](../1.Basics_of_Programming/2.Patterns/20.Pattern_20.cpp)

</details>

</details>

## Function and Arrays

<details>

</details>
