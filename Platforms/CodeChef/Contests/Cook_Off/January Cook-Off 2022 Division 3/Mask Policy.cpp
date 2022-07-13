#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n, a;
    cin >> n >> a;
    int infected = a;       // 1
    int uninfected = n - a; // 2
    if (uninfected == infected)
        cout << uninfected << endl;
    else if (uninfected <= infected)
        cout << uninfected << endl;
    else if (infected <= uninfected)
        cout << infected << endl;
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
