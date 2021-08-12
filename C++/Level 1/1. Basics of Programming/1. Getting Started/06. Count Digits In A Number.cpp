#include <iostream>
using namespace std;

int main()
{
    int n, num = 0;
    cin >> n;

    while (n > 0)
    {
        n /= 10; 
        num++; 
    }

    cout<<num;
    return 0;
}