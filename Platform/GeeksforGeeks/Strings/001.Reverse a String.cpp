//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
}

//User function Template for C++
string reverseWord(string str){
  int  n = str.size()-1; //lastindex of the string!
  int  i = 0; //starting Index of String!
  while(i<n){
      swap(str[i++],str[n--]); //swap two values i.e. starting and ending values
  }
  return str;
}
