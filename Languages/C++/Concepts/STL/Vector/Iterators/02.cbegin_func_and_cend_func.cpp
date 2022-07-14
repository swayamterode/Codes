#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;

    int n;
    cout << "Enter the size of Vector: ";
    cin >> n;
    // input
    for (int i = 1; i <= n; i++)
    {
        v1.push_back(i);
    }
    // Display of vector
    cout << "Output using of cbegin() & cend(): ";
    for (auto i = v1.cbegin(); i != v1.cend(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}