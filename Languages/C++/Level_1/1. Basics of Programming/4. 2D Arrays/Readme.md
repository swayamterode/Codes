# 2d Array

## Question Set

<details>

### 1. 2d Arrays Demo

<details>

**Problem Statement :**

<details>

![1](https://github.com/swayamterode/Codes/blob/main/Languages/C%2B%2B/Level_1/1.%20Basics%20of%20Programming/4.%202D%20Arrays/img/1.0.2D_Array_demo.png)

**Sample Output:**

>2
>
>4
>
>11
>
>12
>
>13
>
>14
>
>21
>
>22
>
>23
>
>24

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

</details>
