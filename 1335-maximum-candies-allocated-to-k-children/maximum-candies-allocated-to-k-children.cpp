class Solution {
public:
    int maximumCandies(vector<int>& a, long long k) {
        long long i=1,j=*max_element(a.begin(),a.end()),ans=0;
        while(i<=j) {
            long long m=i+(j-i)/2;
            long long c=0;
            for(int x:a)
                c+=x/m;
            if(c>=k) {
                ans=m;
                i=m+1;
            }
            else
                j=m-1;
        }
        return ans;
    }
};