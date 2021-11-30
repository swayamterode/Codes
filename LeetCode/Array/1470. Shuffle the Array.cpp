class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int *ptr1 = &nums[0], *ptr2 = &nums[n];
        for(int i = 0; i < n ; i++) {
            ans.push_back(*ptr1++);
            ans.push_back(*ptr2++);
        }
        return ans;
    }
};
