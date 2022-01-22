// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{ 
    int s1=0,s2=0,mul=0;
  for(int i = 0;i < n/2;i++){
      s1 += arr[i];
  }
   for(int i = n/2;i < n;i++){
      s2 += arr[i];
  }
  return s1*s2;
}
