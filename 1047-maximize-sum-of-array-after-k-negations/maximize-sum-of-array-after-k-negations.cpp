class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0 && k>0)
            {
                nums[i]=-nums[i];
                k--;
            }
        }
        int ans=0;
        int minn=nums[0];
        int mini=0;
        if(k%2!=0)
        {
            for(int i=1;i<nums.size();i++)
            {
                if(minn>nums[i])
                {
                    minn=nums[i];
                    mini=i;
                }
            }
            nums[mini]*=-1;
        }
        for(int i:nums)
            ans += i;
        return ans;
    }
};