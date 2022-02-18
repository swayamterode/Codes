#include <iostream>
using namespace std;
 
string isTriangleExists(int a, int b, int c)
{
	if(a != 0 && b != 0 && c != 0 && (a + b + c)== 180)
		// Checking if sum of any two angles
		// is greater than equal to the third one
		if((a + b)>= c || (b + c)>= a || (a + c)>= b)
			return "YES";
		else
			return "NO";
	else
		return "NO";
}

int main() {
    int a,b,c;
    cin>>a>>b>>c;
cout << isTriangleExists(a, b, c) << endl;
return 0;
}
