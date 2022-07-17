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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, x = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
                continue;
            }
            count++;
            if (count == 4)
            {
                cout << "NO\n";
                x = 1;
                break;
            }
        }
        if (x == 1)
            continue;
        else
            cout << "YES\n";
    }
    return 0;
}
