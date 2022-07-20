#include <iostream>
using namespace std;

int digitFreq(int n, int d)
{
  int count = 0;
  while (n != 0)
  {
    int temp = n % 10;
    n /= 10;
    if (temp == d)
    {
      count++;
    }
  }
  return count;
}
int main()
{
  int n, d;
  cin >> n >> d;
  cout << digitFreq(n, d);
  return 0;
}
