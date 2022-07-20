# Patterns

## Pattern 1

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

[Detailed Solution](../2.Patterns/01.Pattern_1.cpp)

</details>

</details>

## Pattern 2

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

[Full Solution](../2.Patterns/02.Pattern_2.cpp)

</details>

</details>

## Pattern 3

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

[Detailed Solution](../2.Patterns/03.Pattern_3.cpp)

</details>

## Pattern 4

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

[Full Solution](../2.Patterns/04.Pattern_4.cpp)

</details>

</details>

## Pattern 5

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

[Full Solution](../2.Patterns/05.Pattern_5.cpp)

</details>

</details>

## Pattern 6

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

[Full Solution](../2.Patterns/06.Pattern_6.cpp)

</details>

</details>

## Pattern 7

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

[Full Solution](../2.Patterns/07.Pattern_7.cpp)

</details>

</details>

## Pattern 8

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

[Solution ✔️](../2.Patterns/08.Pattern_8.cpp)

</details>

 </details>

## Pattern 9

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

[Solution ✔️](../2.Patterns/09.Pattern_9.cpp)

</details>

## Pattern 10

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

[Solution ✔️](../2.Patterns/10.Pattern_10.cpp)

</details>

## Pattern 11

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

[Solution ✔️](../2.Patterns/11.Pattern_11.cpp)

</details>

## Pattern 12

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

[Solution ✔️](../2.Patterns/12.Pattern_12.cpp)

</details>

## Pattern 13

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

[Solution ✔️](../2.Patterns/13.Pattern_13.cpp)

 </details>

## Pattern 14

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

[Solution ✔️](../2.Patterns/14.Pattern_14.cpp)

</details>

## Pattern 15

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

[Solution ✔️](../2.Patterns/15.Pattern_15.cpp)

</details>

## Pattern 16

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

[Solution ✔️](../2.Patterns/16.Pattern_16.cpp)

</details>

## Pattern 17

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

[Solution ✔️](../2.Patterns/17.Pattern_17.cpp)

</details>

## Pattern 18

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

[Solution ✔️](../2.Patterns/18.Pattern_18.cpp)

</details>

## Pattern 19

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

[Solution ✔️](../2.Patterns/19.Pattern_19.cpp)

</details>

## Pattern 20

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

[Solution ✔️](../2.Patterns/20.Pattern_20.cpp)

</details>
