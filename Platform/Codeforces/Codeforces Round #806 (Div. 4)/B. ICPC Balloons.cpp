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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a[26] = {0};
    
    forn(i, sz(s))
    {
        a[s[i] - 'A']++;
    }
    int ans = 0;

    for (int i = 0; i < 26; i++)
    {
        ans += a[i];
        if (a[i] != 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    FAST();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}