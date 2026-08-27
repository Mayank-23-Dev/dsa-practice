class Solution {
public:
    int findMin(vector<int>& nums)
    {
        int index=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                index=i;
                break;
            }
        }
        if(nums[index]<nums[0])
            return nums[index];
        return nums[0];
    }
};