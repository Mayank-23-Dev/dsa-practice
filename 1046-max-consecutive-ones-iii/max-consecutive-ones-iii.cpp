class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0;
        int maxLength=0;
        int temp=k;
        while(right<nums.size())
        {
            if(nums[right]==0)
                temp--;
            while(temp<0)
            {
                if(nums[left]==0)
                    temp++;
                left++;
            }
            maxLength=max(maxLength,right-left+1);
            right++;
        }
        return maxLength;
    }
};