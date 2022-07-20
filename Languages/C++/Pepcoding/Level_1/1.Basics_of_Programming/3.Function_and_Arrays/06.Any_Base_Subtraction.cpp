#include <iostream>
using namespace std;

int getDifference(int b, int n1, int n2)
{
  int rv = 0;
  int p = 1; // p=power
  int c = 0; // c=carry
  while (n2 > 0)
  {
    int d1 = n1 % 10;
    int d2 = n2 % 10;
    d2 += c; // settling previous carries (or borrow)
    int d = 0;
    if (d2 >= d1)
    {
      c = 0;
      d = d2 - d1;
    }
    else
    {
      c = -1;
      d = d2 + b - d1;
    }
    rv += d * p;
    p *= 10;
    n1 /= 10;
    n2 /= 10;
  }
  return rv;
}

int main()
{
  int b, n1, n2;
  cin >> b >> n1 >> n2;
  int ans = getDifference(b, n1, n2);
  cout << ans << endl;
}
