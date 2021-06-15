# Arrays

## 1.[Index Implementation](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/1.Index_Implementation.cpp)

### The above code lets us know how the index of arrays is useful in printing the output of a particular element

---

## 2.[Index Implementaion using for loop](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/2.Index_Implementation_for_loop.cpp)

### The above code lets us know how the for loop works when you have to print the array elements repeatedly

**Syntax for loop**

```C++
for ( init; condition; increment ) {
   statement(s);
}
```

#### In this code we have used

``` C++
 for (int i=0;i<6;i++)
    {
        cout<<array[i]<<endl;
    }
```

#### This will automatically increment the index value until the Condition becomes false that is `i<6`

---

## 3.[Index Implementaion using for loop](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/3.Index_Implementation_for_loop.cpp)

### The above code lets us know how the index of arrays is useful in printing the output of a particular element. But this time the syntax for *for loop* is different

``` C++
 for (int x:array){
    statement(s);
    }
```

#### It will import all the values of the array int x. It will be clear from the below example

``` c++
 for (int x:array){
    cout<<x<<endl;
    }
```

#### It will import all the values of the array int x. Then it will print each element of the array in a new line

---

## 4.[Index Implementaion using for loop](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/4.Index_Implementation_for_loop.cpp)

### Similar example as the above one

---

## 5.[Index Implementation *float*-using for loop](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/5.Index_Implementation_float-using_for_loop.cpp)

### Similar example as [Index Implementation using for loop](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/3.Index_Implementation_for_loop.cpp) but here we have used floating data type

#### See the code to get a clear idea of how the float datatype works even when the decimal points are not mentioned in the code

---

## 6.[Sum of Array](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/6.Sum_of_Array.cpp)

### This code tells us how addition is done in an array

---

## 7.[Linear Seach](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/7.Linear_Seach.cpp)

### Linear search (Searching algorithm) is used to find whether a given number is present in an array and if it is present then at what location it occurs. It is also known as sequential search. It is straightforward and works as follows: We keep on comparing each element with the element to search until it is found or the list ends

---

## 9.[Max Number in Array](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/9.Max_Number_in_Array.cpp)

### This includes some special element that is `INT_MIN`. What it does is automatically determines the minimum element in the array which makes us easier for us to understand the code rather than writing it with an `if-else loop`

```C++
 int max=INT_MIN;
    for(auto x:A)
    {
        if(x>max){
            max=x;
        }
        
    }
```

---

## 10.[Min of two numbers in Array](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/10.Min_of_two_numbers_in_Array.cpp)

#### Same as [Max Number in Array](https://github.com/swayamterode/Codes/blob/main/C%2B%2B/1.Array/9.Max_Number_in_Array.cpp) but here we have used `x<min` to get the condition for the Min Number

```C++
int A[5]={1,2,3,4,5};
    int min =INT_MAX;
    for(int x:A){
        if(x<min)
        min=x;
    }
    cout<<"The MINIMUM NUMBER is:"<<min<<endl;
```
---
