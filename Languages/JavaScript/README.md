# JavaScript

## JavaScript Variables

<details>
<!-- <summary>Click here to expand </summary> -->

Variables are containers used to store the data.

There are 4 ways to declare a variable:

- Using `var`
- Using `let`
- Using `const`
- Using nothing

**Let us understand with an example:**

```cpp
var x = 5;
var y = 65;
var z = x + y;
```

In the above example `x`, `y` and `z` are variables, which are declared with the help of the `var` keyword.

**All the three words `var`, `const`, and `let` are the same.**

## When to use JS var?

```MD
- We use the var keyword in JS code from 1995 to 2015.
- If we want our code must run in old browsers then use var
- The let & const keywords were added to JS in 2015.
```

## Now when to use let and const?

```MD
If you want a general rule: always declare variables with const.

If you think the value of the variable can change, use let.
```

### Example

```js
const price1 = 34; //this values cannot change so we have used const
const price1 = 44; //this values cannot change so we have used const
let total = price1 + price2;
```

</details>
<!------------------------------------------->

## JavaScript Identifiers

<details>

All JS **variables** can be identified with unique names.

These unique names are called **identifiers**.

**_RULES for constructing names for variables(unique identifiers) are:_**

- Name can contain letters, digits, underscore, and dollar signs.
- Name must **begin with letter** or **$** and **\_**(underscore).
- Names are case sensitive

</details>

## JavaScript Datatypes

<details>

| Data Types  | Description                                        | Example                       |
| ----------- | -------------------------------------------------- | ----------------------------- |
| `String`    | represents textual data                            | 'hello', "hello world!" etc   |
| `Number`    | an integer or a floating-point number              | 3, 3.234, 3e-2 etc.           |
| `BigInt`    | an integer with arbitrary precision                | 900719925124740999n , 1n etc. |
| `Boolean`   | Any of two values: true or false                   | true and false                |
| `undefined` | a data type whose variable is not initialized      | let a;                        |
| `null`      | denotes a null value                               | let a = null;                 |
| `Symbol`    | data type whose instances are unique and immutable | let value = Symbol('hello');  |
| `Object`    | key-value pairs of collection of data              | let student = { };            |

</details>

## JS Let

<details>

The `let` keyword was introduced in ES6.

| Rules                                                                       |
| :-------------------------------------------------------------------------- |
| **Variables which are defined with `let` cannot be _Redefined_**            |
| **Variables defined with `let` must be defined before we use the variable** |
| **Variables decalred with `let` have _Block Scops_**                        |

<!--let block scope -->

**Example:**

<img src="https://github.com/swayamterode/Codes/blob/main/Languages/JavaScript/public/001.png" alt="let have Block Scoped">

From the above error we can say that **we cannot** declare **two variable of same name with `let` keyword!**

Another intresting fact:

We can declare the same variables with the help of `var` keyword having different values, but **cannot** _declare the same variable which we have deaclared earlier with `let` keyword. let's understand with the help of **example**_

<img src="https://github.com/swayamterode/Codes/blob/main/Languages/JavaScript/public/002.png" alt = "let and var keyword explained">

In the above example we have declare `x` 4 times, two times with `let` keyword and two times with `var` keyword, but this gives error beacuse we cannot variable that are use d by `let` keyword.

But can use different variable name to see the difference.

## Block Scope

Before ES6 (2015), JavaScript had only **Global Scope** and **Function Scope.**

ES6 introduced two important new JavaScript keywords: `let` and `const`.

**These two keywords provide Block Scope in JavaScript.**

Variables declared inside a `{ }` block **cannot** be accessed from **outside** the block:

<table>
<tr>
<td> <code>var</code> keyword </td> <td> <code>let</code> Keyword! </td>
</tr>
<tr>
<td>

```js
{
  var x = 2;
} //X CAN be used here
```

</td>

<td>

```js
{
  let x = 2;
} //X can NOT be used here
```

</td>
</tr>
<tr>
<td> Variable declared with <code>var</code> keyword can have block scope.

The variable declared with <code>var</code> keyword can be accessed from the outside the block.

</td>
<td>

The variable declared with <code>let</code> keyword cannot be accessed from the outside the block.

</td>
</tr>
</table>

<!-- ---------------------------------------------------------------------------->

## Redeclaring Variables

<table>
<tr>
<td> <code>var</code> keyword </td> <td> <code>let</code> Keyword! </td>
</tr>
<tr>
<td>

```js
var num1 = 55;
//here num1 is 55
{
  var num1 = 56;
  //here num1 is 56
}
{
  var num1 = 5;
  //here num1 is 5
} //finally num1= 5
```

</td>

<td>

```js
let num2 = 55; //here num1 is 55
{
  let num2 = 56; //here num1 is 56
}
{
  let num2 = 5; //here num1 is 5
} //finally num1= 55
```

</td>
</tr>
<tr>
<td> 
The variable declared with the <code>var</code> keyword can change variable value with the inside the {} block same as <code>let</code> keyword and the variable will have the recently updated value
</td>
<td>

The variable which are decalred before { } block will be the variable value after decalartion of all scope, but same varible declared in { } block will be for that block itself(after that scope is blocked).

</td>
</tr>
</table>

</details>
