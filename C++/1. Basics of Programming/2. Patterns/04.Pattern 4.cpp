#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int star = n;
  int space = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < space; j++)
    {
      cout << "\t";
    }
    for (int k = 1; k <= star; k++)
    {
      cout << "*\t";
    }
    cout << endl;
    space++;
    star--;
  }

}