#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin >> n;
    
    string str;
    cin >> str;

    string ans = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
        {
            ans.push_back('T');
        }
        else if (str[i] == 'T')
        {
            ans.push_back('A');
        }
        else if (str[i] == 'C')
        {
            ans.push_back('G');
        }
        else
        {
            ans.push_back('C');
        }
    }
    cout << ans << endl;
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
