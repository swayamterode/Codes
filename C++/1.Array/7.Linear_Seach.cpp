#include <bits\stdc++.h>
using namespace std;
int main (){
    int A[10],n=10,key;
    cout<<"Enter the numbers:";
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the key:";
    cin>>key;

    for (int i = 0; i < n; i++)
    {
        if (key==A[i])
        {
        cout<<"Found at "<<i;
        return 0;
        }

    }
    cout<<"Not found";
    return 0;
}