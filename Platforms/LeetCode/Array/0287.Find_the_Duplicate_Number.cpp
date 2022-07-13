class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ind = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {

            if (nums[i] == nums[i + 1])
            {
                ind = nums[i];
                break;
            }
        }
        return ind;
    }
};
