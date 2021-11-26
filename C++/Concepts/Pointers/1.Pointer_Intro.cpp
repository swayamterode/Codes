#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 10;
  int *pointer = &n;
  cout << "The value of variable is: " << *pointer << "\t"
       << "The address of the pointer is: " << pointer;
  return 0;
}