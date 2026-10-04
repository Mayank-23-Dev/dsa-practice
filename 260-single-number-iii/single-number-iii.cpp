class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        int xr=0;
        for (int i:nums)
            xr^=i;
        unsigned int bit=(unsigned int)xr & -(unsigned int)xr;
        int a=0,b=0;
        for (int x:nums)
        {
            if (x & bit)
                a^=x;
            else
                b^=x;
        }
        return {a, b};
    }
};