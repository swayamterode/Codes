#include <bits/stdc++.h>
using namespace std;
int solve()
{
    string s;
    cin >> s;
    if (s[0] != 'Y' && s[0] != 'y')
    {
        cout << "NO" << endl;
    }
    else if (s[1] != 'E' && s[1] != 'e')
    {
        cout << "NO" << endl;
    }
    else if (s[2] != 'S' && s[2] != 's')
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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
