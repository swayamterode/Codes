#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n > 0)
    {
        int remainder = n % 10;
        n /= 10;
        cout << remainder << endl;
    }
    return 0;
}