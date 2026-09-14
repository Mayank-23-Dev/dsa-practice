class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int countl=0,countp=0;
        for(int i:nums)
        {
            if(i==pivot)
                countp++;
            else if(i<pivot)
                countl++;
        }
        int low=0,mid=countl,high=countl+countp;
        vector<int> ans(nums.size(),0);
        for(int i:nums)
        {
            if(i==pivot)
            {
                ans[mid]=i;
                mid++;
            }
            else if(i<pivot)
            {
                ans[low]=i;
                low++;
            }
            else
            {
                ans[high]=i;
                high++;
            }
        }
        return ans;
    }
};