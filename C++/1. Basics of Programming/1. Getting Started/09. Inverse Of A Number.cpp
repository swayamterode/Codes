#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int number;
    cin>>number;
    int place=1;
    int reverse=0;
    while (number!=0)
    {
        int orignal_Number = number % 10;
        int inverted_Digit = place ;
        int inverted_Place = orignal_Number ;
        reverse=reverse+(inverted_Digit*pow(10, inverted_Place-1));
        number/=10;
        place++;
    }
    cout<<reverse<<endl;
return 0;
}