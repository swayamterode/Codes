# JavaScript

## Variables

<details>
<summary>    Click here to expand </summary>

Varibles are container used to store the data.

There are 4 ways to declare a variable:

- Using `var`
- Using `let`
- Using `const`
- Using nothing

**Let us understand with example:**

```cpp
var x = 5;
var y = 65;
var z = x + y;
```

In the above example `x`, `y` and `z` are variables, which are deaclared with the help of `var` keyword.

**All the three words `var`, `const` and `let` all are same.**

## When to use JS var?

```md
- We use var keyword in JS code from 1995 to 2015.
- If we want our code must run in old browsers then use var
- The let & const keywords were added to JS in 2015.
```

## Now when to use let and const?

```md
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
