#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    // input
    for (int i = 1; i <= n; i++)
    {
        v1.push_back(i);
    }
    // same ouptut as input was given
    cout << "Output using of begin() & end(): ";
    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    // This will print in reverse manner!
    cout << "Output using rbegin() and rend(): ";
    for (auto it = v1.rbegin(); it != v1.rend(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}