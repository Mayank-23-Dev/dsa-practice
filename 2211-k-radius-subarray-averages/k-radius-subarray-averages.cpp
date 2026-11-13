class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),-1);
        if(nums.size()<(2*k+1))
            return ans;
        long long sum=0;
        for(int i=0;i<=2*k;i++)
            sum+=nums[i];
        ans[k]=sum/(2*k+1);
        int right=k+1;
        while(right<nums.size()-k)
        {
            sum+=nums[right+k]-nums[right-k-1];
            ans[right]=sum/(2*k+1);
            right++;
        }
        return ans;
    }
};