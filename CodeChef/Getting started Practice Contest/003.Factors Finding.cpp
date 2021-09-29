#include <iostream>
using namespace std;
void factorsAndCount(int n)
{
  int count = 0;
  for (int i = 1; i <= n; i++)
    if (n % i == 0) {
      count++;
    }
  cout << count << endl;
  for (int j = 1; j <= n; j++)
    if (n % j == 0) {
      count++;
      cout << j << "\t";
    }
}
int main() {
  int n;
  cin >> n;
  factorsAndCount(n);
  return 0;
}
