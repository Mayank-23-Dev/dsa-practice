class Solution {
public:
    vector<int> findLonely(vector<int>& nums)
    {
        if(nums.size()<=1)
            return nums;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        if(nums[0]!=nums[1] && nums[1]!=nums[0]+1)
            ans.push_back(nums[0]);
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1] && nums[i+1]!=nums[i]+1 && nums[i-1]!=nums[i] && nums[i]!=nums[i-1]+1)
                ans.push_back(nums[i]);
        }
        if(nums[nums.size()-2]!=nums[nums.size()-1] && nums[nums.size()-1]!=nums[nums.size()-2]+1)
            ans.push_back(nums[nums.size()-1]);
        return ans;
    }
};