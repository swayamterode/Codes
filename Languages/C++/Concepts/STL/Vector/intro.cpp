#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Input-----------------------------
    vector<int> v;    // vector was empty!
    v.push_back(5);   // inserting 1st element in vector.
    v.push_back(523); // inserting 2nd element in vector.
    v.push_back(3);   // inserting 3rd element in vector.
    v.push_back(35);  // inserting 4th element in vector.
    v.push_back(232); // inserting 5th element in vector.
    // Output-----------------------------
    // Just like array, vectors can be accessed with index based.
    cout << "Elements in the vector: ";
    cout << v[0] << " "; // prints 1st element
    cout << v[1] << " "; // prints 2nd element
    cout << v[2] << " "; // prints 3rd element
    cout << v[3] << " "; // prints 4th element
    cout << v[4] << " "; // prints 5th element
    // deleting an element from vector from last and replcaing the last ele with some other varaible.
    v.pop_back();
    v.push_back(0);
    cout << "\nElement in the array after deleting an element in vector: ";
    cout << v[0] << " "; // prints 1st element
    cout << v[1] << " "; // prints 2nd element
    cout << v[2] << " "; // prints 3rd element
    cout << v[3] << " "; // prints 4th element
    cout << v[4] << " "; // prints 5th element
    cout << "\n\n\n\n";

    // Creating vector of a particular size
    vector<int> vec(50, 9); // all the 50 element in the vector are set to 9.
    cout << vec[41];        // if print and index in range from 0 to 49 we would get 9.

    return 0;
}