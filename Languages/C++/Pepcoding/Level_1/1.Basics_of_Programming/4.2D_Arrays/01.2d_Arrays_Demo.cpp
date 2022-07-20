#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr;
    //input
    for (int i = 0; i < n; i++)
    {
        vector<int> sarr;
        for (int j = 0; j < m; j++)
        {
            int element;
            cin >> element;
            sarr.push_back(element);
        }
        arr.push_back(sarr);
    }

    //Output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
