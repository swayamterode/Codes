#include <iostream>
using namespace std;

int main()
{
    int n, n1, num = 0;

    cout << " Enter a positive integer :  ";
    cin >> n;

    n1 = n; 
    while (n > 0)
    {
        n /= 10; 
        num++; 
    }

    cout << "\nThe number of digits in the entered number " << n1 <<" is "<< num<<endl;
    return 0;
}