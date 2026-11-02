class Solution {
public:
    vector<int> next_permute(vector<int>& nums)
    {
        if(nums.size()<=1)
            return nums;
        int pivot=-1;
        for(int i=nums.size()-1;i>=1;i--)
        {
            if(nums[i-1]<nums[i])
            {
                pivot=i-1;
                break;
            }
        }
        if(pivot==-1)
        {
            reverse(nums.begin(),nums.end());
            return nums;
        }
        int minv=nums.size()-1;
        while(nums[minv]<=nums[pivot])
            minv--;
        swap(nums[pivot],nums[minv]);
        reverse(nums.begin()+pivot+1, nums.end());
            return nums;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> permute=nums;
        ans.push_back(permute);
        permute=next_permute(permute);
        while(permute!=nums)
        {
            ans.push_back(permute);
            permute=next_permute(permute);
        }
        return ans;
    }
};