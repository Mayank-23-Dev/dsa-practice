class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long mx=nums[0],mn=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++) {
            if(nums[i]<0)
                swap(mx,mn);
            mx=max((long long)nums[i],mx*nums[i]);
            mn=min((long long)nums[i],mn*nums[i]);
            ans=max(ans,mx);
        }
        return ans;
    }
};