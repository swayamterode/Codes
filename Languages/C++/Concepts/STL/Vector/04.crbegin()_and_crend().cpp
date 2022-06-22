#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;

    cout << "Enter the size of the vector: ";
    int n, temp;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v1.push_back(temp);
    }
    cout << "OUTPUT USING CRBEGIN() AND CREND():";
    for (auto it = v1.crbegin(); it != v1.crend(); ++it)
    {
        cout<< *it<<" "; 
    }
    return 0;
}