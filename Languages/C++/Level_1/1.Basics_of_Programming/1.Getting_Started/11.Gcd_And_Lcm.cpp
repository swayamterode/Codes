#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  int num1, num2;
  cin >> num1 >> num2;
  int temp1 = num2;
  int temp2 = num1;
  int ans = 0;
  while (temp2 % temp1 != 0)
  {
    int rem = temp2 % temp1;
    temp2 = temp1;
    temp1 = rem;
    ans = rem;
  }
  cout << ans << endl;

  int lcm = 0;
  lcm = (num1 * num2) / ans;
  cout << lcm;
  return 0;
}