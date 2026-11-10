class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int slow=0,fast=0;
        while(fast!=nums.size())
        {
            if(nums[fast]%2==0)
            {
                swap(nums[slow],nums[fast]);
                slow++;
            }
            fast++;
        }
        return nums;
    }
};