#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define nl "\n"
#define all(v) v.begin(), v.end()
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define ll long long int
using namespace std;
void solve() //user function
{
    int i;
    ll n;cin >> n; //input
    string s1, s2;cin >> s1 >> s2;
    string res(2 * n, '0');
    sort(all(s1));sort(all(s2));
    ll  tem = n - 1, bem = 0, b = n - 1,a = 0;
    ll rst = 2 * n - 1, TIH = 0;
    for (i = 0; i < 2 * n; i++)
    {
        if (b < bem){res[TIH] = s1[a];a += 1;TIH += 1;continue;}
        if (a > tem){res[TIH] = s2[b];b -= 1;TIH += 1;continue;}
        if (i % 2 == 0)
        {
            if (s1[a] < s2[b]){res[TIH] = s1[a];a += 1;TIH += 1;}
            else{res[rst] = s1[tem];rst -= 1;tem -= 1;}
        }

        else
        {
            if (s2[b] > s1[a]){res[TIH] = s2[b];TIH += 1;b -= 1;}
            else
            {res[rst] = s2[bem];rst -= 1;bem += 1;}
        }
    }cout << res << "\n";
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {solve();}
    return 0;
}
