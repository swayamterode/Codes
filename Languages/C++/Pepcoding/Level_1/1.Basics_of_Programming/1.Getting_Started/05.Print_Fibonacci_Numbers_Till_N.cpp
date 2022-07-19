#include <iostream>
using namespace std;

int main (){
int n,num,n1,n2;
cin>>n;
n1=0,n2=1;
cout<<n1<<endl<<n2<<endl;

for (int i = 2; i <n; ++i)
{
    num=n1+n2;
    cout<<num<<endl;
    n1=n2;
    n2=num;
}
return 0;
}