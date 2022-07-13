class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;
        while(start<end){
            if(s.at(start)!= s.at(end)){
                return(validPalindromeHelper(s,start+1,end) || validPalindromeHelper(s,start,end-1));
            }
            start++;
            end--;
        }
        return true;
    }
    private :
    bool validPalindromeHelper(string s, int start, int end)
    {
        while(start<end){
            if(s.at(start)!= s.at(end)){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
