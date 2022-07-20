#include <iostream>
using namespace std;
int dtob(int n, int b)
{ // dtob = Decimal to any base.
  int power = 1;
  int ans = 0;
  while (n > 0)
  {
    int digit = n % b;
    ans += (digit * power);
    power *= 10;
    n = n / b;
  }
  return ans;
}
int main()
{
  int n, b;
  cin >> n >> b;
  cout << dtob(n, b);
  return 0;
}
