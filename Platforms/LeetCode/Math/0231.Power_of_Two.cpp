//Brute force!
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0; i<=30; i++)
        {
            int ans = pow(2,i);
            if (n == ans)
                return true;
        }
        return false;
    }
};
//Optimal
class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n == 0)  return false;
        
        return (n>0) && (1073741824%n==0);
    }
};
