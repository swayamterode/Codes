#include <iostream>
using namespace std;

void triangleEverywhere()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
            cout << "1";
        else if (a == b || b == c || c == a)
            cout << "2";
        else
            cout << "3";
    }
    else
        cout << "-1";
}
int main()
{
    triangleEverywhere();
    return 0;
}
