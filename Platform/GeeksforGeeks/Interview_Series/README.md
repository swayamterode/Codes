# Interview Series

## Interview Series `#`57

<details>

### 1.Seating Arrangement

<details>

### Question Link [here](https://practice.geeksforgeeks.org/contest/interview-series-57/problems/)

Question

### Solution

<details>

```c++
// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:

  bool can_place(int index, int m, vector<int>&seats){
      if((index < m-1 and seats[index+1]==1) or (index >0 and seats[index-1]==1)) return false;

      return true;
  }

  bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
      // Write your code here.
      for(int i = 0; i<m; i++) {

          if(seats[i]== 1) i++;
          else{
              if(can_place(i,m,seats)){
                  n--;
                  i++;
              }else{
                  continue;
              }
          }
      }
      if (n > 0)   return false;

      return true;
  }
};

// { Driver Code Starts.

int main(){

  int t;
  cin >> t;
  while (t--) {
      int n;
      cin >> n;
      int m;
      cin >> m;
      vector<int> seats(m);
      for (int i = 0; i < m; i++) {
          cin >> seats[i];
      }
      Solution obj;
      if (obj.is_possible_to_get_seats(n, m, seats)) {
          cout << "Yes" << endl;
      }
      else {
          cout << "No" << endl;
      }
  }
}
// } Driver Code Ends
```

</details>

</details>

---

</details>
