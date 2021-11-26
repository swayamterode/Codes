#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "---Single Pointer---\n\n";
    int i = 10;
    int *p = &i;
    cout << "The address of p is: " << p << endl;
    cout << "The value of p is: " << *p << endl;
    cout << "\n---Double Pointer---\n\n";
    int **q = &p;
    cout << "The address of q is: " << q << " which is the address of p variable." << endl;

    cout << "\nDifferent Ways of printing address:\n\n";
    cout << p << " p (simple Pointer) Gives the same address.\n";
    cout << *q << " *q (double Pointer) Gives the same address.\n";
    cout << &i << " &i (Refernce variable) Gives the same address.\n";

    cout << "\n---Different ways to access the Values of the variable----\n\n";
    cout << i << " Gives the value of the variable\n";
    cout << *p << " Gives the value of the variable\n";
    cout << **q << " Gives the value of the variable\n\n";

    return 0;
}