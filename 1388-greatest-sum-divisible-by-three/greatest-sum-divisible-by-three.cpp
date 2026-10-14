class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum=0;
        int smallestRem1 = INT_MAX;
        int smallestRem2 = INT_MAX;
        int secondSmallestRem2 = INT_MAX;
        int secondSmallestRem1 = INT_MAX;
        for (int num:nums)
        {
            sum+=num;
            if (num%3==1)
            {
                if(num<smallestRem1)
                {
                    secondSmallestRem1=smallestRem1;
                    smallestRem1=num;
                }
                else if(num<secondSmallestRem1)
                    secondSmallestRem1=num;
            } 
            else if (num%3==2)
            {
                if(num<smallestRem2)
                {
                    secondSmallestRem2=smallestRem2;
                    smallestRem2=num;
                } 
                else if (num < secondSmallestRem2)
                    secondSmallestRem2=num;
            }
        }
        if (sum % 3==0)
            return sum;
        int removeTwo;
        if (sum % 3==1)
        {
            int removeOne=smallestRem1;
            if(smallestRem2==INT_MAX || secondSmallestRem2==INT_MAX)
                removeTwo=INT_MAX;
            else
                removeTwo=smallestRem2 + secondSmallestRem2;
            return sum - min(removeOne, removeTwo);
        }
        int removeOne = smallestRem2;
        if(smallestRem1 == INT_MAX || secondSmallestRem1 == INT_MAX)
            removeTwo=INT_MAX;
        else
            removeTwo=smallestRem1 + secondSmallestRem1;
        return sum - min(removeOne, removeTwo);
        return sum;
    }
};