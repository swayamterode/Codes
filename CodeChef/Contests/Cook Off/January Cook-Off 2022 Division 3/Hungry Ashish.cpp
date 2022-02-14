#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int x, y, z;
    cin >> x >> y >> z; // y= pizzza , z = burger
    if (x >= y)
        cout << "PIZZA\n";
    else if (x >= z)
        cout << "BURGER\n";
    else
        cout << "NOTHING\n";
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
