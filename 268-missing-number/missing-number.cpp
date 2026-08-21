class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        if(nums.empty())
            return 0;
        int mx=nums[0];
        for(int i:nums)
            mx=max(i,mx);
        vector<int> freq(mx+1,0);
        for(int i:nums)
            freq[i]++;
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0)
                return i;
        }
        return nums.size();
    }
};