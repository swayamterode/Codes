class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> targetArray;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            targetArray.insert(targetArray.begin() + index[i], nums[i]);
        }
        return targetArray;
    }
};