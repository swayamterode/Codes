class Solution {
public:
    bool isPalindrome(int x) 
    {
        long long int rev=0;
        int number=x;
        while(x>0)
        {
            rev = (rev*10) + (x%10);
            x = x/10;
        }
        if(rev == number) return true;
        //else
        return false;
    }
};
