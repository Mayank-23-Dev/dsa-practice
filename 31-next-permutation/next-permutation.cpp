class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        if(nums.size()<=1)
            return;
        int pivot=-1;
        for(int i = nums.size()-1;i>0;i--)
        {
            if (nums[i]>nums[i-1])
            {
                pivot=i-1;
                break;
            }
        }
        if(pivot==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        int minv=nums.size()-1;
        while (nums[minv]<=nums[pivot])
            minv--;
        swap(nums[pivot],nums[minv]);
        sort(nums.begin()+pivot+1,nums.end());
    }
};