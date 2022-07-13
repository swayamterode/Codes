#include <bits/stdc++.h>
using namespace std;
int luckyNumber()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == 7 || b == 7 || c == 7))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        luckyNumber();
    }
    return 0;
}