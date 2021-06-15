#include<bits\stdc++.h>
using namespace std;
int  main()
{
    int A[5]={1,2,3,4,5};
    int max=INT_MIN;
    for(auto x:A)
    {
        if(x>max){
            max=x;
        }
        
    }
    cout<<"Maximum number in Array is:" <<max<<endl;
}