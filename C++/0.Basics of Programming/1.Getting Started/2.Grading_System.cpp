#include<iostream>
using namespace std;
int main (){
int marks;
cin>>marks;
if (marks>90){
    cout<<"Excellent";
}
else if (marks>80 && marks<=90){
    cout<<"Good";
}
else if (marks>70 && marks<=80){
    cout<<"Fair";
}
else if (marks>60 && marks<=70){
    cout<<"Expectations";
}
else
cout<<"Below Par";
return 0;
}