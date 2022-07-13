#include <bits/stdc++.h>
using namespace std;

int main() {
  int withdrawal; 
  float balance;
  cin>> withdrawal;
  cin>> balance;
  if(withdrawal%5!=0){
  cout<< std::fixed << std::setprecision(2)<< balance;
  }
  else if((balance - withdrawal - 0.5) < 0){
  cout<< std::fixed <<std::setprecision(2)<< balance;
  }
  else{
    balance=balance - withdrawal - 0.5;
    cout<<balance;
  }
	return 0;
}