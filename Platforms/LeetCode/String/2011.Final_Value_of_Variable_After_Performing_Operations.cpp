class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int count = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "--X" || operations[i] == "X--")
            {
                count--;
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};
