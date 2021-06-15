#include<bits\stdc++.h>
using namespace std;
int main (){
    int A[5]={1,2,3,4,5};
    int min =INT_MAX;
    for(int x:A){
        if(x<min)
        min=x;
    }
    cout<<"The MINIMUM NUMBER is:"<<min<<endl;
    return 0;
}