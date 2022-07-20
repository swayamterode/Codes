#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int ans = 1;
    for (int j = 0; j <= i; j++)
    {
      cout << ans << "\t";
      ans = (ans * (i - j)) / (j + 1);
    }
    cout << endl;
  }
  return 0;
}