class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days)
    {
        int low=0,high=0;
        low=*max_element(weights.begin(),weights.end());
        for(int x:weights)
            high+=x;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            int sum=0,count=1;
            for(int x:weights)
            {
                if(sum+x>mid)
                {
                    sum=x;
                    count++;
                }
                else
                    sum+=x;
            }
            if(count<=days)
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};