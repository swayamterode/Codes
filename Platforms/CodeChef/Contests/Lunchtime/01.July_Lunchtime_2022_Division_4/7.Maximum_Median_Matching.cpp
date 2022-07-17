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
#define ll long long int                            // long long int

    void solve()
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int k = n / 2;
        reverse(a + k, a + n);

        vector<int> ans;
        for (int i = n / 2; i < n; i++)
            ans.push_back(a[i] + b[i]);

        sort(ans.begin(), ans.end());
        if (n == 1)
            cout << a[0] + b[0] << endl;
        else
            cout << ans[0] << endl;
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
