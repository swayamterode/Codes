# 2d Array

## Question Set

<details>

### 1. 2d Arrays Demo

<details>

**Problem Statement :**

<details>

![1](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/1.0.2D_Array_demo.png)

**Sample Output:**

> 2
>
> 4
>
> 11
>
> 12
>
> 13
>
> 14
>
> 21
>
> 22
>
> 23
>
> 24

![Constraints](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/1.1.2D_Array.png)

![Output](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/1.1.3.2D_array.png)

</details>

**C++ Solution** ✔️

<details>

```cpp

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr;
    //input
    for (int i = 0; i < n; i++)
    {
        vector<int> sarr;
        for (int j = 0; j < m; j++)
        {
            int element;
            cin >> element;
            sarr.push_back(element);
        }
        arr.push_back(sarr);
    }

    //Output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

```

</details>

</details>

---

### 2. Matrix Multiplication

<details>

**Problem Statement :**

<details>

![Martrix Mul](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/2.1.0.Matrix_Multiplication.png)

![Const](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/2.1.1.Matrix_Multiplication_Const.png)

Sample Input:

> 2
>
> 3
>
> 10
>
> 0
>
> 0
>
> 0
>
> 20
>
> 0
>
> 3
>
> 4
>
> 1
>
> 0
>
> 1
>
> 0
>
> 0
>
> 1
>
> 1
>
> 2
>
> 1
>
> 1
>
> 0
>
> 0

![Sample Output](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/2.1.2.Matrix_Multiplication_output.png)

</details>

**C++ Solution** ✔️

<details>

```cpp
#include<iostream>
#include<vector>

using namespace std;

void matrixMult(vector<vector<int>> A, vector<vector<int>> B){
    int r1 = A.size();
    int c1 = A[0].size();
    int r2 = B.size();
    int c2 = B[0].size();

    if(c1 != r2)
    {
        cout<<"Invalid input";
        return;
    }
    vector<vector<int>> pdt;
    for(int i = 0; i<r1; i++) {
        vector<int> arr;
    for(int j = 0; j<c2; j++){
        int mul = 0;
        for(int k = 0; k<c1; k++){
            mul += (A[i][k] * B[k][j]);
        }
        arr.push_back(mul);
    }
    pdt.push_back(arr);
}

for(int i = 0; i<r1; i++) {
    for(int j= 0; j<c2; j++){
        cout<<pdt[i][j]<<" ";
    }
    cout<<endl;
}
}

int main(){
    int r1;
    int c1;
    cin>>r1;
    cin>>c1;

    vector<vector<int>> mat1;
    for(int i= 0; i< r1; i++){
        vector<int> arr;
        for(int j= 0; j< c1; j++){
            int ele;
            cin>> ele;
            arr.push_back(ele);
        }
        mat1.push_back(arr);
    }

    int r2;
    int c2;
    cin>>r2;
    cin>>c2;

    vector<vector<int>> mat2;
    for(int i= 0; i< r2; i++){
        vector<int> arr;
        for(int j= 0; j< c2; j++){
            int ele;
            cin>> ele;
            arr.push_back(ele);
        }
        mat2.push_back(arr);
    }

    matrixMult(mat1, mat2);
}
```

</details>

</details>

---

### 3. The State Of Wakanda - 1

<details>

**Problem Statement:**

<details>

![The_State_Of_Wakanda-1](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/3.1.0.The_State_Of_Wakanda-1.png)

![Const](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/3.1.0.The_State_Of_Wakanda-1_const.png)

![Sample Input Output](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/3.1.1.The_State_Of_Wakanda-1_Input_sample_output.png)

**Sample Input:**

> 3
>
> 4
>
> 11
>
> 12
>
> 13
>
> 14
>
> 21
>
> 22
>
> 23
>
> 24
>
> 31
>
> 32
>
> 33
>
> 34

**Sample Output:**

> 11
>
> 21
>
> 31
>
> 32
>
> 22
>
> 12
>
> 13
>
> 23
>
> 33
>
> 34
>
> 24
>
> 14

</details>

**C++ Solution** ✔️

<details>

```cpp
#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat) {
  int row = mat.size();
  int col = mat[0].size();

  for (int i = 0; i < col; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < row; j++) {
        cout << mat[j][i] << endl;
      }
    }
    else {
      for (int j = row - 1; j >= 0; j--) {
        cout << mat[j][i] << endl;
      }
    }
  }
}

int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;

  vector<vector<int>> mat;
  for (int i = 0; i < n; i++) {
    vector<int> arr;
    for (int j = 0; j < m; j++) {
      int ele;
      cin >> ele;
      arr.push_back(ele);
    }
    mat.push_back(arr);
  }

  columnTraversal(mat);
}
```

</details>

</details>

---

</details>
