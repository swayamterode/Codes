#include <bits/stdc++.h>
using namespace std;
#define FAST()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define forn(i, n) for (int i = 0; i < int(n); i++) // for loop from 0 to n-1
#define sz(v) (int)v.size()                         // size of vector or array
#define all(v) v.begin(), v.end()                   // all of vector or array
#define Mod 1e9 + 7                                 // mod value
#define eb emplace_back                             // emplace back is used to add element in vector
#define mp make_pair                                // used to make pair of two elements
#define pb push_back                                // used to add element in vector
int solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int sum1 = x1 + y1;
    int sum2 = x2 + y2;
    if (sum1 <= sum2)
        cout << sum1 << endl;
    else
        cout << sum2 << endl;
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
