# Low-Level Design

## What is the need for LLD?

- **Testing**
- **Big fix**

**Testing** takes **minimal time** but **Bug fixing** takes a lot of time.

Before writing the code we need a well-defined structure in simpler words to think of **MAP** of the house which a Civil Engineer draws and then the house is made.

LLD is the MAP of Design.

## How to be a master in LLD

- **OOP Design**
- **Solid Principle**
- **These do not code templates** but Design patterns.

## LLD requires OOP Principles

- Abstraction
- Inheritance
- Polymorphism
- Encapsulation

## 3 Things to judge an LLD

> - **Maintianable** means **time spend** on **Bug fixing, Testing and Refactoring** must be **minimum** as possible.
> - **Transparent** means easily understandable.
> - **Extensible** means easy to add more features, the minimum number of code changes.

These are **SOLID** principles.

**Comments** are not considered here.

## Design Software representing Birds

If you want to begin a bird we design **blueprint** of the Bird.

```java
class Bird {
//Attributes
String color;
int height, weight;

//Methods

void eat() {

}

void fly() {

}
};
```

Blueprint of Birds.

Giving attributes to the bird is created using Object

```java
Brid eagle = new Brid();
eagle.fly();
```

There's a problem in this code there is some stage where all the birds cannot fly at a certain height.

So to solve this issue we use attributes and pass this into functions.

```java
void fly (string type) {
    if(type == "hen") {
    //fly at 6 ft
    }

    else if (type == "Eagle")
    {
    //fly above the clouds.
    }
}
```

Assume that the user is always sending correct attributes in the function the output is correct.

But different attributes give different results.
