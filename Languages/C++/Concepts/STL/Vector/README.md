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

# Iterators

There are several functions which are used in the vectors.

```cpp
1. begin()   - Returns an element which is in the begining in the vector.
2. end()     - Returns an element which is at end of the vector.
3. rbegin()  - Returns reverse vector poiting to the last element in the vector.
4. rend()    - Returns reverse vector poiting to the first elemen in the vector. 
5. crbegin() - Returns constant iterator pointing to first element **REVERSE**.
6. crend()   - Returns constant iterator pointing to last element **REVERSE**.
7. cbegin()  - Returns constant iterator pointing to first element.
8. cend()    - Returns constant iterator pointing to first element.
```

## Example of begin() & end()

```cpp
vector<int> v;
    // input size of user Vector
    int n;
    cout << "Enter the size of Vector:";
    cin >> n;
    vector<int> v1; // vector delcaration
    // input ele in vector
    for (int i = 1; i <= n; i++)
    {
        v1.push_back(i);
    }
    // Display of vector
    cout << "Output using of begin & end: ";
    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        cout << *i << " ";
    }

```

**OUTPUT**
<p>
    <img src="https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Concepts/STL/Vector/Output-images/begin()%20%26%20end().png" />
</p>

