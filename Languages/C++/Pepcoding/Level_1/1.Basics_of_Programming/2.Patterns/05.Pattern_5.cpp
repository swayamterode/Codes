#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int space = n / 2;
  int star = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= space; j++)
    {
      cout << "\t";
    }
    for (int j = 1; j <= star; j++)
    {
      cout << "*\t";
    }
    cout << endl;

    if (i <= n / 2)
    {
      space--;
      star += 2;
    }
    else {
      space++;
      star -= 2;
    }
  }
  return 0;
}