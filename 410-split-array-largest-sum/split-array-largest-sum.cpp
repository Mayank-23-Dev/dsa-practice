class Solution {
public:
    int splitArray(vector<int>& nums, int k)
    {
        int low=0,high=0;
        low=*max_element(nums.begin(),nums.end());
        for(int x:nums)
            high+=x;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            int sum=0,count=1;
            for(int x:nums)
            {
                if(sum+x>mid)
                {
                    sum=x;
                    count++;
                }
                else
                    sum+=x;
            }
            if(count<=k)
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};