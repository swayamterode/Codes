#include <bits/stdc++.h>
using namespace std;
int TestMatch()
{

    long long score, India = 0, England = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> score;
        if (score == 1)
            India++;
        else if (score == 2)
            England++;
    }
    if (India > England)
        cout << "INDIA\n";
    else if (England > India)
        cout << "ENGLAND\n";
    else
        cout << "DRAW\n";

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        TestMatch();
    }
    return 0;
}
