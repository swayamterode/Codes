class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int count = 0, j;
        if (ruleKey == "type")
            j = 0;
        if (ruleKey == "color")
            j = 1;
        if (ruleKey == "name")
            j = 2;
        for (int i = 0; i < items.size(); i++)
        {
            if (items[i][j] == ruleValue)
                count++;
        }
        return count;
    }
};
