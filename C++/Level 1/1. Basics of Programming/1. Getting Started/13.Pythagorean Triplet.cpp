#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int a, b, c;
  cin >> a >> b >> c;

  //write your code here
  
  int num1 = (a*a)+(b*b);
  int num2= (a*a)-(c*c);
  int sq1=c*c;
  int sq2=b*b;
  if(num1== sq1 || num2 == sq2){
      cout<<"true"<<endl;
  }
  else 
  cout<<"false"<<endl;
}