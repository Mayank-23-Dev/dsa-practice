class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int minlength=INT_MAX,sum=0;
        while(right!=nums.size())
        {
            sum+=nums[right];
            while(sum>=target)
            {
                minlength=min(minlength,right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        return minlength==INT_MAX?0:minlength;
    }
};