#include <bits/stdc++.h>
using namespace std;
int main()
{
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
    cout << "Output using of begin() & end(): ";
    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}