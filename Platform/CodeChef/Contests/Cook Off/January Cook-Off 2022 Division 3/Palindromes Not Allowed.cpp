#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin >> n;
    string s = ""; // empty string
    char cur = 'a';
    for (int i = 0; i < n; i++)
    {
        s += cur;
        cur++;
        if (cur == 'd')
            cur = 'a';
    }
    cout << s << endl;
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
