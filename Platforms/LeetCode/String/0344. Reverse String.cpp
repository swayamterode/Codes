//Brute Force
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i = 0; i<n/2; i++)
        {
            swap(s[i], s[n-1-i]);
        }
    }
};
// 99.8% Accuracy!
class Solution {
public:
    void reverseString(vector<char>& s) {
        int first = 0;
        int last = s.size()-1;
        while(first<last){
            swap(s[first], s[last]);
            first++;
            last--;
        }
    }
};
