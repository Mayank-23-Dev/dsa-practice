class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX;
        for(int x:nums)
        {
            if(x>=max1)
            {
                max2=max1;
                max1=x;
            }
            else if(x>max2)
                max2=x;
            if(x<=min1)
            {
                min2=min1;
                min1=x;
            }
            else if(x<min2)
                min2=x;
        }
        long long ans=1LL*max1*max2-1LL*min1*min2;
        return ans;
    }
};