class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        n=min(n,10);
        int ans=10;
        int curr=9;
        for(int i=2;i<=n;i++)
        {
            curr*=11-i;
            ans+=curr;
        }

        return ans;
    }
};