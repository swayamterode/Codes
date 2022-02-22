//Not so good code quality
class Solution {
public:
    int titleToNumber(string columnTitle) {
       int n = columnTitle.length();
        if(n == 1 )
        {
            return (columnTitle[0] - 'A') + 1;
        }
        int increase = 0;
        int ans = 0;
        for(int i = n-1; i>=0; i--)
        {
            int pos  = (columnTitle[i] - 'A') +1;
            ans = ans + (pos * pow(26,increase));
            increase ++;
        }
        return ans;
    }
};

//Good Code quality!
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int increase = 0, ans = 0;
        int n = columnTitle.length();
        for(int alphabet = n-1; alphabet>=0; alphabet--) { //reverse order
            int pos  = (columnTitle[alphabet] - 'A') + 1;
            ans = ans + (pos * pow(26,increase));
            increase ++;
        }
        return ans;
    }
};
