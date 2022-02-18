#include <bits/stdc++.h>
using namespace std;
void pointer(int *p)
{
    cout << "Address of Poniter varaible: " << p << endl;
    cout << "Value of Pointer variable: " << *p << endl;
}
void increment(int *p)
{
    (*p)++;
    cout << "The address of p is still same: " << p << " but value of p has incremented by one: " << *p << endl;
}
void decrement(int *p)
{
    (*p)--;
    cout << "The address remains the same i.e: " << p << " but now the value beacomes: " << *p << " before it was 11." << endl;
}
int main()
{
    int i = 10;
    int *p = &i;
    pointer(p);
    increment(p);
    decrement(p);
    return 0;
}