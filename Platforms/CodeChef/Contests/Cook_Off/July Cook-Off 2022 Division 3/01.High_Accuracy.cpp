#include <bits/stdc++.h>
using namespace std;
int solve()
{
    float x;
    cin >> x;
    float b = ceil(x/3);
    float c = b * 3;
    float d = x - c;
    cout << abs(d) << endl;
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
