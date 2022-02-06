//Brute Force!

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        if(nums.size() == 0) {
            return 0;
        }
        
        int i = 0;
        for(int j = 0; j<nums.size();j++) {
            if(nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

//Optimal Solution

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int length = nums.size(), index = 0;
		while ( index < length )
		{
			 if ( nums[index] == val )
			 {
				 nums[index] = nums[length - 1];
				 -- length;
			 }
				
			else ++index;
		}
		 return length;  
	}
};
