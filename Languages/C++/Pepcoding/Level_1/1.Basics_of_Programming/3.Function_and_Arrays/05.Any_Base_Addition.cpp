#include <iostream>
using namespace std;

int getSum(int b, int n1, int n2)
{
  int carry = 0;
  int power = 1;
  int ans = 0;

  while (n1 != 0 || n2 != 0 || carry != 0)
  {
    int d1 = n1 % 10; // extracting digits
    int d2 = n2 % 10;
    int d = d1 + d2 + carry; // adding up extracted digits
    carry = d / b;           // storing carry for next addition
    d = d % b;
    ans += d * power;
    power *= 10;
    n1 /= 10;
    n2 /= 10;
  }
  return ans;
}
int main()
{
  int b, n1, n2;
  cin >> b >> n1 >> n2;
  cout << getSum(b, n1, n2) << endl;
}
