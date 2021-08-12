#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i + j == n + 1) {
        cout << "*\t";
      }
      else {
        cout << "\t";
      }

    }
    cout << endl;
  }
  return 0;
}

/**
 * @file 08.Pattern 8.cpp
 * @author Swayam Terode
 * @brief  Another approach
 * @version 0.1
 * @date 2021-08-06
 * 
 * @copyright Copyright (c) 2021

#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int space = n-1;
  for (int i = 1; i <= n; i++) {
      for (int j =1; j <=space; j++){
          cout<<"\t";
      }
      cout<<"*\t";
      cout<<endl;
      space--;
}       
return 0;
}
*/
