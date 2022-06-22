# Vectors

Vectors are another form of dynamic **Arrays**, it have a special ability to resize itself.

- We can extend Vectors whereas we cannot extend Arrays.
- Inserting an element into a array is costly.

**Vector Syntax:**

```cpp
vector<int> v; //declaration
```

## Inserting an Element into a vector

```cpp
    vector<int> v;    // vector was empty!
    v.push_back(5);   // inserting 1st element in vector---5.
    v.push_back(523); // inserting 2nd element in vector----523.
    v.push_back(3);   // inserting 3rd element in vector---3.
    v.push_back(35);  // inserting 4th element in vector---35.
    v.push_back(232); // ---232
```

## Displaying an element of vector

```cpp
cout<<v[0]<<" ";//prints 1st element ---5
cout<<v[1]<<" ";//prints 2nd element --- 523
cout<<v[2]<<" ";//prints 3rd element --- 3
cout<<v[3]<<" ";//prints 4th element --- 35
cout<<v[4]<<" ";//prints 5th element --- 232
```

## Removing last ele and inserting new ele to the last

```cpp
    v.pop_back(); //deletes the last element in the vector
    v.push_back(0); //replaces with 0

    cout << v[0] << " "; // prints 1st element ---5
    cout << v[1] << " "; // prints 2nd element ---523
    cout << v[2] << " "; // prints 3rd element ---3
    cout << v[3] << " "; // prints 4th element --- 35
    cout << v[4] << " "; // prints 5th element ---0
```

NOTE: **The size of vector changes everytime**

## Different ways to make vector

```cpp
vector<int> vec(50, 9); // all the 50 element in the vector are set to 9.
    cout << vec[41];        // if print and index in range from 0 to 49 we would get 9.
```
