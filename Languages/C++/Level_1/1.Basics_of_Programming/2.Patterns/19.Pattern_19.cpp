#include <iostream>

using namespace std;
int main(int argc, char** argv) {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n ; j++)
    {

      if (i == 1) // for row 1
      {
        if (j <= n / 2 + 1 || j == n)
        {
          cout << "*\t";
        }
        else {
          cout << "\t";
        }
      }

      else if (i <= n / 2) // remaining rows just befor the middle row
      {
        if (j == n || j == n / 2 + 1)
        {
          cout << "*\t";
        }
        else
        {
          cout << "\t";
        }
      }
      else if (i == n / 2 + 1) // Middle row
      {
        cout << "*\t";
      }
      else if (i < n)
      {
        if (j == 1 || j == n / 2 + 1 ) // set of rows excluding last row
        {
          cout << "*\t";
        }
        else
        {
          cout << "\t";
        }
      }
      else // last row
      {
        if (j == 1 || j >= n / 2 + 1)
        {
          cout << "*\t";
        }
        else
        {
          cout << "\t";
        }
      }
    }
    cout << endl;
  }
}