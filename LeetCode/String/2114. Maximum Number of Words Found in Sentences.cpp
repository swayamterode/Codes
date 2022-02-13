class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result = 0;
        for (auto const &s: sentences) {
            int n = count(s.begin(), s.end(), ' ');
            result = max(result, n + 1);
        }
        return result;
    }
};
