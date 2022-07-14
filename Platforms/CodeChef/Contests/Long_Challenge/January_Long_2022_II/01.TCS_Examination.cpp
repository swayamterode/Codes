#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int dsa1, toc1, dm1;
    int dsa2, toc2, dm2;
    cin >> dsa1 >> toc1 >> dm1;
    cin >> dsa2 >> toc2 >> dm2;
    int total1, total2;
    total1 = dsa1 + toc1 + dm1;
    total2 = dsa2 + toc2 + dm2;

    if (total1 > total2 && total1 != total2) // total Score
    {
        cout << "DRAGON\n";
    }
    else if (total2 > total1 && total2 != total1)
    {
        cout << "SLOTH\n";
    } // Tie Condition
    else if (dsa1 == dsa2 && toc1 == toc2 && dm1 == dm2)
    {
        cout << "TIE\n";
    }
    // 2nd Highest marks i.e. TOC
    else if (total1 == total2 && dsa1 == dsa2)
    {
        if (toc1 > toc2)
            cout << "DRAGON\n";
        else
        {
            cout << "SLOTH\n";
        }
    }
    else if (total1 == total2) // DSA condition
    {
        if (dsa1 > dsa2)
        {
            cout << "DRAGON\n";
        }
        else
        {
            cout << "SLOTH\n";
        }
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