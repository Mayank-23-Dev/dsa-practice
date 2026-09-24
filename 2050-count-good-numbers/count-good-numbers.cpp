class Solution {
public:
    const long long MOD=1e9+7;
    long long power(long long a,long long b)
    {
        if(b==0)
            return 1;
        long long half=power(a,b/2);
        half=(half*half)%MOD;
        if(b%2==1)
            half=(half*a)%MOD;
        return half;
    }
    int countGoodNumbers(long long n)
    {
        long long result=power(20,n/2);
        if(n%2==1)
            result=(result*5)%MOD;
        return result;
    }
};