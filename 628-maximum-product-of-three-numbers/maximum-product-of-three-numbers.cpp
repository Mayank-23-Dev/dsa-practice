class Solution {
public:
    int maximumProduct(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        long ans1=1,ans2=1;
        ans1=nums[0]*nums[1]*nums[nums.size()-1];
        ans2=nums[nums.size()-3]*nums[nums.size()-2]*nums[nums.size()-1];
        if(ans2>ans1)
            return ans2;
        return ans1;
    }
};