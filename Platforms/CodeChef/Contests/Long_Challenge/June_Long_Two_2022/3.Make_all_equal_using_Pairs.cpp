#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_count = 0;
    
    map<int, int> count;

    for (auto i : arr)
    {
        count[i]++;
        max_count = max(max_count, count[i]);
    }
    cout << (n - max_count) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
