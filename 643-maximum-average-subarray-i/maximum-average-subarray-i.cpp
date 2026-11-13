class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int right=0;
        double maxavg=INT_MIN;
        int sum=0;
        for(right;right<k;right++)
            sum+=nums[right];
        maxavg=max(maxavg,(sum/(k*1.00)));
        while(right<nums.size())
        {
            sum+=nums[right]-nums[right-k];
            maxavg=max(maxavg,(sum/(k*1.00)));
            right++;
        }
        return maxavg;
    }
};