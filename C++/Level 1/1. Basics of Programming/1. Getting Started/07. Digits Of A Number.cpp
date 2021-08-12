#include <iostream>
using namespace std;

int  main (){
    int n;
    cin>>n;
    int temp=n;
    int power=1;
    while (temp>=10)
    {
        temp/=10;
        power*=10;
    }
    temp=n;
    while(power!=0){
        int digit = temp/power;
        cout<<digit<<endl;
        temp=temp%power;
        power/=10;
    }
return 0;
}